#include <iostream>

void selectionSort(int* arr, int size, int start) {
    int index = -1;
    int min = arr[start];
    for (int i = start + 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index = i;
        }
    }
    if (index != -1) {
        int temp = arr[start];
        arr[start] = min;
        arr[index] = temp;
    }
}

int main() {
    int arr[] = { 6, 9, 4, 2, 3, 8, 4, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;

    for (int i = 0; i < size - 1; i++) {
        selectionSort(arr, size, i);
    }
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }


