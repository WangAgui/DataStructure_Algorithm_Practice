#include <iostream>
#include"Maxheap.h" 
#include"SortHelper.h"
#include"heapSort.h"

//原地堆排序，在数组内直接进行堆排序，不需要额外空间 
//与之前的堆排序不同的是，数组内的元素从0开始 

//parent(i) = (i-1)/2
//left child(i) = 2*i+1; right child(i) = 2*i+2; 
template<typename T>
void __shiftDown(T arr[],int n,int k){
	while(2*k+1 <n){
		int j = 2*k+1;
		if(j+1<n &&arr[j+1]>arr[j])
			j+=1;
		
		if(arr[k]>=arr[j])
			break;
		
		swap(arr[k],arr[j]);
		k=j; 
	}
}
template<typename T>
void heapSort(T arr[],int n){
	//heapify
	for(int i=(n-1)/2;i>=0;i--){
		__shiftDown(arr,n,i);
	}
	
	for(int i=n-1;i>=0;i--){
		swap(arr[0],arr[i]);
		__shiftDown(arr,i,0);
	}
}



int main(int argc, char** argv) {
	
	int n =1000000;
	int *arr = SortTestHelper::GenerateRandomArray(n,0,n);
	int *arr1 = SortTestHelper::copyArray(arr,n); 
	
//	SortTestHelper::testSort("heapSort1",heapSort1,arr,n);
	SortTestHelper::testSort("heapSort2",heapSort,arr1,n);
	
	delete [] arr;
	delete [] arr1;
	return 0;
}
