#include <iostream>
#include"SortHelper.h"
#include"mergeSort.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n = 10;
//	int *arr = SortTestHelper::GenerateRandomArray(n,0,n);
	int arr[n] = {8,7,9,10,5,4,6,3,1,2};
	SortTestHelper::PrintArray(arr,n);
	mergeSort(arr,n);
	
	SortTestHelper::PrintArray(arr,n);
	
	
	return 0;
}
