#ifndef SORT_HELPER_H
#define SORT_HELPER_H

#include<iostream>
#include<ctime> 
#include<cassert>
using namespace std;

namespace SortTestHelper{
	
	//生成有n个元素的随机变量，每个变量随机范围[rangeL,rangeR] 
	int* GenerateRandomArray(int n,int rangeL,int rangeR){
		
		assert(rangeL<=rangeR); 
		int *arr = new int[n];
		//将arr里的元素初始化为随机数
		
		srand(time(NULL));//设立随机种子 
		for(int i=0;i<n;i++)
		{
			//生成rangeL到rangeR的随机整数,标准方式 
			arr[i] = rand() %(rangeR-rangeL+1)+rangeL; 
		}
		return arr;
	}
	//生成一个近乎有序的随机数组,目的是为了体现优化的插入排序的好处
	//此函数的思路为先建立一个完全有序的随机数组，再随机改变一定量的次序。 
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
	//isSorted用来判定是否成功排序
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
	
	
	//testSort用来评判排序算法的优良，引入clock函数 
	template<typename T>
	//sortName:算法名称，第二个参数为函数指针，即调用的排序算法，arr和n为导入的测试用例 
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
			cout<<"未成功排序!!！！"<<endl;
		}
//		assert(isSorted(arr,n)); 	
		//ClOCKS_PER_SEC为每秒钟多少个时钟周期 
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
