#include <iostream>
#include "SinglyLinkedList.h"

int main() {
    SinglyLinkedList <int> list = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::cout << "original list: " << list << '\n';
    list.pop_back();
    list.pop_front();
    std::cout << "list after deleting 10 and 1: " << list << '\n';
    list.push_back(10);
    list.push_front(1);
    std::cout << "list after adding 10 and 1: " << list << '\n';
    std::cout << "is 5 in list? " << list.find(5) << '\n';
    std::cout << "is 11 in list? " << list.find(11) << '\n';
    std::cout << "Size = " << list.size() << '\n';
    list.erase(5);
    list.erase(11);
    std::cout << "list after erasing 5: " << list << '\n';
    std::cout << "is list empty? " << list.empty() << '\n';
    list.clear();
    std::cout << "is list empty? " << list.empty() << '\n';
    return 0;
}