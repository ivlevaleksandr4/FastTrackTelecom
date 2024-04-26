#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <vector>

class ThreadClass {
public:
    ThreadClass() {
        this->full = false;
        this->end = false;
        this->empty = true;
    }

    void write() {
        while (true) {
            std::unique_lock <std::mutex> lock(SolveMutex);
            cv_empty.wait(lock, [this]() {return !full;});
            std::cout << "Write a number(-1 to exit the program): ";
            std::cin >> num;
            if (num == -1) {
                end = true;
                empty = false;
                lock.unlock();
                cv_full.notify_all();
                break;
            }
            full = true;
            empty = false;
            lock.unlock();
            cv_full.notify_all();
        }
    }

    void read() {
        while (true) {
            std::unique_lock <std::mutex> lock(SolveMutex);
            cv_full.wait(lock, [this]() {return !empty;});

            if (end) {
                lock.unlock();
                break;
            }

            std::cout << "Output: " << num << std::endl;
            full = false;
            empty = true;
            lock.unlock();
            cv_empty.notify_all();
        }
    }
private:
    std::mutex SolveMutex;
    std::condition_variable cv_full;
    std::condition_variable cv_empty;
    int num;
    bool full;
    bool empty;
    bool end;
};


int main() {
    ThreadClass threadObj;
    std::vector<std::thread> threads;

    threads.push_back(std::thread(&ThreadClass::read, &threadObj));
    threads.push_back(std::thread(&ThreadClass::write, &threadObj));

    for (int i = 0; i < 2; i++)
        threads[i].join();

    std::cout << "Program is finished" << std::endl;

    return 0;
}