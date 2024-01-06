// RecursiveBinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int recursiveBinarySearch(int *arr, int first, int last, int mid,int num) {
    if (arr[mid] == num) return mid;
    else if (arr[mid] < num) first = mid + 1;
    else if (arr[mid] > num) last = mid - 1;
    mid = first + (last - first) / 2;
    return recursiveBinarySearch(arr, first, last, mid, num);
    
    

}
int main()
{
    int arr[] = { 1,2,3,4,5,6 };
    int first = 0;
    int last = sizeof(arr) / sizeof(arr[0]) - 1;
    int mid = first + (last - first) / 2;
    
    std::cout<<recursiveBinarySearch(arr, first, last, mid,4);
}

