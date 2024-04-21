#include <iostream>
#include <cmath>

const double eps = 1e-9;

using namespace std;

double func(double x, double y) {
    return x * x - 4 + y * y + 6 * x * y;
}

double ternary_search(double left, double right) {
    while (right - left > eps) {
        double mid1 = left + (right - left) / 3;
        double mid2 = right - (right - left) / 3;
        double func1 = func(mid1, mid1);
        double func2 = func(mid2, mid2);
        
        if (func1 < func2) {
            right = mid2;
        }
        else {
            left = mid1;
        }
    }
    return func(left, left);
}

int main() {
    double ans = ternary_search(-10, 10);
    cout << "Answer to the task is " << ans << '\n';
    return 0;
}