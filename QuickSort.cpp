// QuickSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int partition(int* arr, int start, int end) {
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j <= end - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;
    return i;
}


void quickSort(int* arr, int start, int end) {
    if (end <= start) return; //base 
    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot+1, end);
}



int main()
{
    int arr[] = { 2,6,8,4,3 };
    
    int size = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, size - 1);
    for (int a : arr) {
        std::cout << a;
    }

}
