#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H
#include<algorithm>
using namespace std;



template<typename T>
void insertionSort(T arr[],int n)
{
	//��ѡ���������������ǵڶ���ѭ��������ǰ����������ʱ�Ĳ����������ܲ���
	//��Ϊһ�ν��������θ�ֵ����,���Կ����ø�ֵ�����滻�������� 
	for(int i=1;i<n;i++){   //i��1��ʼ����Ϊ�����Ԫ�ز���Ҫ����
		//ÿ��Ԫ����ǰ���Ԫ�رȽ� 
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
