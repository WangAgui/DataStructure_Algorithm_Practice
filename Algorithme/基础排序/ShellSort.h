#ifndef SHELL_SORT_H
#define SHELL_SORT_H
#include<algorithm>
template<typename T>
void shellSort(T arr[],int n)
{
	//根据knuth算法生成理想的最大间隔 
	int Interval=1;
	while(Interval<n)
	{
		Interval = 3*Interval+1;
		if(Interval>n){
			Interval = (Interval-1)/3;
			break;
		}
	}
	
	for(int incre=Interval;incre>0;incre=(incre-1)/3)
	{//希尔增量序列   
		for(int start=incre;start<n;start++){
			//对每个增量的序列，进行插入排序 
			T temp = arr[start];
			int k;
			for(k=start;k-incre>=0&&temp<arr[k-incre];k-=incre)
			{
				
				arr[k] = arr[k-incre];
			}
			arr[k] = temp;
		}	
	} 
	
}



#endif
