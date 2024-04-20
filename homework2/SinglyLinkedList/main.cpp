#include <iostream>
#include "SinglyLinkedList.h"

int main() {
    SinglyLinkedList <int> list;

    for (int i = 1; i <= 50; ++i) {
        list.push_back(i);
    }
    std::cout << list << '\n';
    list.pop_back();
    list.pop_front();
    std::cout << list << '\n';
    list.clear();
    std::cout << list << '\n';

    return 0;
}