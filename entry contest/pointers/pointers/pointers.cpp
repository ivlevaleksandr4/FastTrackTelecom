#include <iostream>

using namespace std;

void multiplyByTwo(int* arr, int size) {
    if (arr == nullptr) {
        printf("Error: Null pointer passed\n");
        return;
    }
    
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2;
    }
}

int main() {
    int array[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    printf("\n");

    multiplyByTwo(array, size);
    printf("Modified array:\n");
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }

    return 0;
}