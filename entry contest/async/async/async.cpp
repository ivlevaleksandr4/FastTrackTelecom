#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

using namespace std;

class ThreadClass {
public:
    void Solve(long long &res, long long start, long long end) {
        while (start <= end) {
            unique_lock <mutex> lock(solveMutex);
            res *= start;
            lock.unlock();
            start++;
        }
    }

private:
    mutex solveMutex;
};

int main() {
    ThreadClass threadObj;
    vector <thread> threads;
    long long n = 30, start = 1, res = 1, diff;

    cout << "Enter the number whose factorial you want to calculate: ";
    cin >> n;

    if (n < 0) {
        cout << "The factorial of a negative number does not exist" << '\n';
        return 1;
    }

    diff = n / 2;
    for (int i = 0; i < 2; ++i) {
        threads.push_back(thread(&ThreadClass::Solve, &threadObj, ref(res), start, diff));
        start = diff + 1;
        diff = n;
    }

    for (int i = 0; i < 2; ++i) {
        threads[i].join();
    }

    printf("The factorial of %lld is %lld\n", n, res);
    return 0;
}