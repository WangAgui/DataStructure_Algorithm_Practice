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

	cout<<"һ�������"<<endl; 
	SortTestHelper::testSort("bubbleSort",bubbleSort,arr4,n);
	SortTestHelper::testSort("selectionSort",selectionSort,arr1,n);
	SortTestHelper::testSort("insertionSort",insertionSort,arr2,n);
	SortTestHelper::testSort("insertionSortOptimized",insertionSortOptimized,arr3,n);
	SortTestHelper::testSort("shellSort",insertionSortOptimized,arr9,n);
	cout<<"���ڽ��������������������:"<<endl; 
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
ð�����������ģ���������O(n^2)��Ч�ʺܵ� 
ѡ������ΪO(n^2),�ӵ�һ��Ԫ�ؿ�ʼ������ÿ�ν���Ԫ�غ������Сֵ���Ԫ�ػ���
δ�Ż��Ĳ������򣺴ӵڶ���Ԫ�ؿ�ʼ������ÿ�ν���Ԫ�ز嵽ǰ���Ѿ�����õ������У���������
Ϊ�����ǰһ��С������
�Ż��Ĳ���������Ϊһ�λ�����Ҫ���θ�ֵ���������Ծ��ܲ������������ǰ��ֹ�Ƚϣ���Ч�ʲ��ߣ�
�������̲��������swap����
���������������������������Ч�ʷǳ��ߣ�Լ����O(n),�����������ʵ�����кܳ�����
���ܲ�������ĸ��Ӷ�ΪO(n^2)��ȴ����Щ���Ϻ���Ҫ�� 
�Բ��������һ���Ż�-������ϣ������
 

*/


}
