#include <iostream>
#include "sortHelper.h"
#include "quickSort.h"
#include "randomQuickSort.h" 
#include "quickSort2.h"
#include "quickSort3.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int n= 100000;
	int *arr = SortTestHelper::GenerateRandomArray(n,0,n);
	int *arr1 = SortTestHelper::copyArray(arr,n);
	int *arr2 = SortTestHelper::copyArray(arr,n);
	
	SortTestHelper::testSort("Quick sort 1ways",quickSort,arr1,n);
	SortTestHelper::testSort("Quick sort 2ways",quickSort2,arr2,n);
	SortTestHelper::testSort("Quick Sort 3ways",quickSort3,arr,n);
	delete[] arr;
	delete[] arr1;
	delete[] arr2;
	return 0;
}
