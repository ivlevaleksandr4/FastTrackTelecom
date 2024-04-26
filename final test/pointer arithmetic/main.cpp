#include <iostream>

int main() {
    int nums[10];

    std::cout << "Input 10 elements: " << std::endl;
    for (int num : nums) {
        std::cin >> num;
    }

    int* ptr = nums;

    if (ptr == nullptr) {
        throw std::invalid_argument("bad pointer");
    }

    ptr += 3;
    std::cout << "Fourth element is " << *ptr << std::endl;

    return 0;
}