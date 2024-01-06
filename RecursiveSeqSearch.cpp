// RecursiveSeqSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



int seqSearch(int i,int *arr,int num) {
	if (arr[i] == num) return i;
	return seqSearch(i + 1, arr, num);


}
int main()
{
	int arr[] = {1,2,5,8,7};
	std::cout<<seqSearch(0, arr, 7);
   
}
