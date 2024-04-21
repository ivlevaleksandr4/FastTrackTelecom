﻿#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <atomic>
#include <utility>  // as_const

using namespace std;

template <class T>
class ThreadSafeQueue {
public:
    ThreadSafeQueue() = default;
    ThreadSafeQueue(const ThreadSafeQueue&) = delete;
    ThreadSafeQueue& operator=(const ThreadSafeQueue&) = delete;

    void Push(T value) {
        lock_guard <mutex> lock(mtx_);
        q_.push(move(value));
        has_value_.notify_one();
    }

    void WaitAndPop(T& value) {       // if T has lightweight default constructor
        unique_lock <mutex> lock(mtx_);
        Wait(lock);
        value = move(q_.front());
        q_.pop();
    }

    shared_ptr <T> WaitAndPop() {  // if T has no lightweight default constructor
        unique_lock <mutex> lock(mtx_);
        Wait(lock);
        auto result = make_shared <T> (move(q_.front()));
        q_.pop();
        return result;
    }

    [[nodiscard]] bool Empty() const noexcept {
        lock_guard <mutex> lock(mtx_);
        return q_.empty();
    }

private:
    void Wait(unique_lock <mutex>& lock) {
        has_value_.wait(lock, [&q = as_const(this->q_)] { return !q.empty(); });
    }

    mutable mutex mtx_;
    queue <T> q_;
    condition_variable has_value_;
};

struct Message {
    int id = 0;
    string user_id;
    string body;
};

ThreadSafeQueue <Message> message_queue;

void ReceiveMessages() {
    static atomic <int> id = 0;
    while (true) {
        this_thread::sleep_for(std::chrono::milliseconds(200));
        auto message = Message{ ++id, "user_id", "Hello" };
        cout << "Message received: " << message.id << '\n';
        message_queue.Push(move(message));
    }
}

void ProcessMessages() {
    while (true) {
        Message message;
        message_queue.WaitAndPop(message);
        this_thread::sleep_for(std::chrono::milliseconds(200));
        cout << "Message " << message.id << " processed\n";
    }
}

int main() {
    thread receiver1(ReceiveMessages);
    thread receiver2(ReceiveMessages);
    thread processor1(ProcessMessages);
    thread processor2(ProcessMessages);
    
    receiver1.join();
    receiver2.join();
    processor1.join();
    processor2.join();

    return 0;
}