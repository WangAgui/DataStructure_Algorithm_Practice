#ifndef QUIKC_SORT_H
#define QUICK_SORT_H
#include<algorithm>
//
//Quick Sort Algorithm
//
//create by Wang Agui 2019/4/4
//

//返回p，使得p左边都比p小，p右边都比p大 
template<typename T>
int __partition(T arr[],int l,int r){
	//待访问的元素：i
	//arr[l+1..j]<v  arr[j+1..i)>v 
	T v = arr[l];
	int j =l;//这里l的初始化非常巧妙 
	for(int i=l+1;i<=r;i++){
		if(arr[i]<v){
			swap(arr[j+1],arr[i]);
			j++;
		}
	} 
	swap(arr[l],arr[j]);
	return j;
}


template<typename T>
void __quickSort(T arr[],int l,int r){
	if(l>=r)return;
	
	int p = __partition(arr,l,r);
	__quickSort(arr,l,p-1);
	__quickSort(arr,p+1,r);
}

template<typename T>
void quickSort(T arr[],int n){
	__quickSort(arr,0,n-1);
}



#endif
