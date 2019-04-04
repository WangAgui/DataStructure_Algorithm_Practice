#ifndef MERGE_SORT_H
#define MERGE_SORT_H

//将[l..mid]和[mid_1..r]两部分进行归并； 
template<typename T>
void __merge(T arr[],int l,int mid,int r){
	//开辟辅助空间 
	T aux[r-l+1];
	for(int i=l;i<=r;i++){
		aux[i-l] = arr[i];
	} 
	
	int i=l,j=mid+1;
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
			arr[k] = aux[j-l];
			j++;
		}
		
	}
	
}

template<typename T>
void __mergeSort(T arr[],int l,int r)
{
	if(l>=r)
		return;
	
	int mid = (l+r)/2;//l+r可能溢出，注意
	__mergeSort(arr,l,mid);
	__mergeSort(arr,mid+1,r);
	if(arr[mid]>arr[mid+1])//一个简单的优化 
		__merge(arr,l,mid,r); 
	
}

template<typename T>
void mergeSort(T arr[],int n)
{
	//借鉴python命名方法，表示此函数不应该被用户调用 
	__mergeSort(arr,0,n-1);
	
}




#endif
