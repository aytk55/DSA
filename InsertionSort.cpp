
#include <iostream>
void swap(int* arr, int first, int second) {
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;

}
void ınsertionSort(int * arr,int index) {
    for (int i = index; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            swap(arr,i, i-1);
        }
    }
}

int main()
{
    int arr[] = { 1,65,8,13,5,7 };
    int size = sizeof(arr) / sizeof(arr[0]);

        for (int i = 1; i < size; i++) {
            ınsertionSort(arr, i);
        }

    for (int i = 0; i < size; i++) {
        std::cout << arr[i]<<" ";
    }
    
}
