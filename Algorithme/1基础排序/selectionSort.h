#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H
#include<algorithm>
using namespace std;

template<typename T>
void selectionSort(T arr[],int n)//arr实际上是一个引用，所以此函数改arr本身 
{
	for(int i=0;i<n;i++)
	{
		//寻找[i,n]最小值；
		int minIndex = i;//minIndex表示找到的最小值的下标 
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minIndex])
				minIndex = j;	
		}
		swap(arr[i],arr[minIndex]);
	}
}

#endif
