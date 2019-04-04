#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

template<typename T>
void bubbleSort(T arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
			else continue; 
		}
	}
}




#endif
