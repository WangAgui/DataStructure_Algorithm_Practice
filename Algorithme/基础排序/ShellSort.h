#ifndef SHELL_SORT_H
#define SHELL_SORT_H
#include<algorithm>
template<typename T>
void shellSort(T arr[],int n)
{
	//����knuth�㷨�������������� 
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
	{//ϣ����������   
		for(int start=incre;start<n;start++){
			//��ÿ�����������У����в������� 
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
