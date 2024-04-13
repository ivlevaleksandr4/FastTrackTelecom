#include <iostream>
#include <thread>
#include <bitset>
#include <random>
#include <vector>

void Generate(char* data, size_t length) {
    std::mt19937 generator(11);
    std::uniform_int_distribution <int> distr(0, 255);
    for (size_t i = 0; i < length; ++i) {
        data[i] = static_cast <char> (distr(generator));
    }
}

void InvertOddBits(char* data, size_t length) {
    auto InvertOddBitsThread = [](char* begin, size_t length){
        for (size_t i = 0; i < length; ++i) {
            begin[i] ^= 0b01010101;
        }
    };

    std::vector <std::thread> threads;
    for (size_t i = 0; i < length; ++i) {
        threads.emplace_back(InvertOddBitsThread, data + i, 1);
    }
    for (auto& t: threads){
        t.join();
    }
}

int main() {
    size_t length;
    std::cout << "Input length(number of bytes) = ";
    std::cin >> length;
    char data[length];
    Generate(data, length);

    std::cout << "\n                Original data = {";
    for (size_t i = 0; i < length; ++i) {
        std::cout << std::bitset <8> (data[i]);
        if (i < length - 1){
            std::cout << ", ";
        }
    }
    std::cout << "}\n";

    InvertOddBits(data, length);

    std::cout << "\nData after inverting odd bits = {";
    for (size_t i = 0; i < length; ++i) {
        std::cout << std::bitset <8> (data[i]);
        if (i < length - 1){
            std::cout << ", ";
        }
    }
    std::cout << "}\n";

    return 0;
}