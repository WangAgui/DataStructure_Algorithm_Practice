#ifndef SORT_HELPER_H
#define SORT_HELPER_H

#include<iostream>
#include<ctime> 
#include<cassert>
using namespace std;

namespace SortTestHelper{
	
	//������n��Ԫ�ص����������ÿ�����������Χ[rangeL,rangeR] 
	int* GenerateRandomArray(int n,int rangeL,int rangeR){
		
		assert(rangeL<=rangeR); 
		int *arr = new int[n];
		//��arr���Ԫ�س�ʼ��Ϊ�����
		
		srand(time(NULL));//����������� 
		for(int i=0;i<n;i++)
		{
			//����rangeL��rangeR���������,��׼��ʽ 
			arr[i] = rand() %(rangeR-rangeL+1)+rangeL; 
		}
		return arr;
	}
	//����һ������������������,Ŀ����Ϊ�������Ż��Ĳ�������ĺô�
	//�˺�����˼·Ϊ�Ƚ���һ����ȫ�����������飬������ı�һ�����Ĵ��� 
	int *generateNearlyOrderedArray(int n,int swapTimes)
	{
		int *arr = new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i] = i;	
		}	
		
		srand(time(NULL));
		for(int i=0;i<swapTimes;i++)
		{
			int posx = rand()%n;
			int posy = rand()%n;
			swap(arr[posx],arr[posy]);
		}
		
		return arr;
	} 
	
	
	
	template<typename T>
	void PrintArray(T *arr,int n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	//isSorted�����ж��Ƿ�ɹ�����
	template<typename T>
	bool isSorted(T arr[],int n)
	{
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
				return false;
			}	
		}	
		return true;
	} 
	
	
	//testSort�������������㷨������������clock���� 
	template<typename T>
	//sortName:�㷨���ƣ��ڶ�������Ϊ����ָ�룬�����õ������㷨��arr��nΪ����Ĳ������� 
	void testSort(string sortName,void(*sort)(T[],int),T arr[],int n) 
	{
		clock_t startTime = clock();
		sort(arr,n);
		clock_t endTime = clock();	
		try{
			if(!isSorted(arr,n)){
				throw 1;
			}
		}catch(...)
		{
			cout<<"δ�ɹ�����!!����"<<endl;
		}
//		assert(isSorted(arr,n)); 	
		//ClOCKS_PER_SECΪÿ���Ӷ��ٸ�ʱ������ 
		cout<<sortName<<" : "<<(double(endTime - startTime))/CLOCKS_PER_SEC<<" s"<<endl; 
	}
	
	template<typename T>
	T* copyArray(T a[],int n)
	{
		T *arr = new T[n];
		copy(a,a+n,arr);
		return arr;	
	}
}


#endif 
