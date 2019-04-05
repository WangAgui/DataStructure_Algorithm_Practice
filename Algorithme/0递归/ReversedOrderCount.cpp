#include <iostream>
#include <algorithm>
//
//利用归并排序的思想求逆序对  create by Wang Agui  2019/4/5
//  
using namespace std;
template<typename T>
void __merge(T arr[],int l,int mid,int r,int &count){
	T aux[r-l+1];
	for(int i=l;i<=r;i++){
		aux[i-l] = arr[i];
	} 
	
	int i=l;
	int j=mid+1;
	
	for(int k=l;k<=r;k++){
		if(i>mid){
			arr[k] = aux[j-l];
			j++;
		}
		else if(j>r){
			arr[k] = aux[i-l];
			i++;
		}
		
		else if(aux[i-l]<=aux[j-l]){
			arr[k] = aux[i-l];
			i++;
		}
		else{
			count=count+mid-i+1;
			arr[k] = aux[j-l];
			j++;
		}
		
	}
	
	
}

template<typename T>
void __Merge(T arr[],int l,int r,int &count){
	if(l>=r) return;
	
	int mid = (l+r)/2;
	__Merge(arr,l,mid,count);
	__Merge(arr,mid+1,r,count);
	__merge(arr,l,mid,r,count);
}


template<typename T>
int Reversed_Order(T arr[],int n,int &count){
	__Merge(arr,0,n-1,count);
}
int main(){
	
	int a[8]={4,5,3,8,9,1,3,1};
	int count =0;
	Reversed_Order(a,8,count);
	for(int i=0;i<8;i++){
		cout<<a[i];
	}
	
	cout<<endl<<"逆序对"<<count<<endl; 
	return 0;
} 
