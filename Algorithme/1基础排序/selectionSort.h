#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H
#include<algorithm>
using namespace std;

template<typename T>
void selectionSort(T arr[],int n)//arrʵ������һ�����ã����Դ˺�����arr���� 
{
	for(int i=0;i<n;i++)
	{
		//Ѱ��[i,n]��Сֵ��
		int minIndex = i;//minIndex��ʾ�ҵ�����Сֵ���±� 
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minIndex])
				minIndex = j;	
		}
		swap(arr[i],arr[minIndex]);
	}
}

#endif
