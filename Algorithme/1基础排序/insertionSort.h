#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H
#include<algorithm>
using namespace std;



template<typename T>
void insertionSort(T arr[],int n)
{
	//与选择排序的最大区别是第二个循环可以提前结束，但此时的插入排序性能不优
	//因为一次交换有三次赋值动作,可以考虑用赋值操作替换交换操作 
	for(int i=1;i<n;i++){   //i从1开始，因为第零个元素不需要考虑
		//每个元素与前面的元素比较 
		for(int j =i;j>0;j--){
			if(arr[j]<arr[j-1])
				swap(arr[j],arr[j-1]);
			else break;  
		} 
	}
}

template<typename T>
void insertionSortOptimized(T arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		T temp = arr[i];
		int j;
		for(j=i;j>0&&temp<arr[j-1];j--)
		{
				arr[j] = arr[j-1];
		}
		arr[j] =temp;
	}
} 

#endif
