#include<iostream>
#include"selectionSort.h"
#include"SortHelper.h"
#include"insertionSort.h"
#include"bubbleSort.h"
#include"ShellSort.h"
using namespace std;
 
int main()
{
	int n = 10000;
	int *arr1 = SortTestHelper::GenerateRandomArray(n,0,n);
	int *arr2 = SortTestHelper::copyArray(arr1,n);
	int *arr3 = SortTestHelper::copyArray(arr1,n);
	int *arr4 = SortTestHelper::copyArray(arr1,n);
	int *arr9 = SortTestHelper::copyArray(arr1,n);
	
	int *arr5 = SortTestHelper::generateNearlyOrderedArray(n,100);
	int *arr6 = SortTestHelper::copyArray(arr4,n);
	int *arr7 = SortTestHelper::copyArray(arr4,n);
	int *arr8 = SortTestHelper::copyArray(arr4,n);
	int *arr10 = SortTestHelper::copyArray(arr4,n);

	cout<<"一般情况："<<endl; 
	SortTestHelper::testSort("bubbleSort",bubbleSort,arr4,n);
	SortTestHelper::testSort("selectionSort",selectionSort,arr1,n);
	SortTestHelper::testSort("insertionSort",insertionSort,arr2,n);
	SortTestHelper::testSort("insertionSortOptimized",insertionSortOptimized,arr3,n);
	SortTestHelper::testSort("shellSort",insertionSortOptimized,arr9,n);
	cout<<"对于近乎有序的数组的排序情况:"<<endl; 
	SortTestHelper::testSort("bubbleSort",bubbleSort,arr8,n);
	SortTestHelper::testSort("selectionSort",selectionSort,arr5,n);
	SortTestHelper::testSort("insertionSort",insertionSort,arr6,n);
	SortTestHelper::testSort("insertionSortOptimized",insertionSortOptimized,arr7,n);
	SortTestHelper::testSort("shellSort",shellSort,arr10,n);
	delete[] arr1;
	delete[] arr2; 
	delete[] arr3; 
	delete[] arr4;
	delete[] arr5;
	delete[] arr6;
	delete[] arr7;
	delete[] arr8;
	delete[] arr9;
	delete[] arr10;
/*
冒泡排序是最差的，它交换了O(n^2)，效率很低 
选择排序为O(n^2),从第一个元素开始遍历，每次将该元素后面的最小值与该元素互换
未优化的插入排序：从第二个元素开始遍历，每次将该元素插到前面已经排序好的数组中，具体做法
为如果比前一个小，互换
优化的插入排序：因为一次互换需要三次赋值操作，所以尽管插入排序可以提前终止比较，但效率不高，
考虑缩短插入排序的swap操作
插入排序在数组近乎有序的情况下效率非常高，约等于O(n),这种情况在现实生活中很常见。
尽管插入排序的复杂度为O(n^2)，却在有些场合很重要。 
对插入排序进一步优化-》》》希尔排序
 

*/


}
