#ifndef BINARY_SEARCH_H_
#define BINARY_SEARCH_H_

//在有序数组arr中查找target，若找到，返回相应索引，否则返回-1 
template<typename T>
int binarySearch(T arr[],int n,int target){
	//在arr[l,r]之中查找target 
	int l=0,r=n-1;
	
	while(l<=r){
		//int mid = (r+l)/2; 这种方式不可取，因为当 
		int mid = l+(r-l)/2;
		if(arr[mid] == target) return mid;
		//将返回缩小为arr[l..mid-1] 
		if(target<arr[mid]) r=mid-1;
		//将范围缩小到arr[mid+1,r] 
		else l=mid+1;
		
	}
	return -1;
}


template<typename T>
int __binarySearch(T arr[],int l,int r,T target){
	if(l>r) return -1;
	
	int mid = l+(r-l)/2;
	if(arr[mid] == target) return mid;
	else if(arr[mid]>target) return __binarySearch(arr,l,mid-1,target);
	else return __binarySearch(arr,mid+1,r,target);
}
//递归方式 
template<typename T>
int binarySearch1(T arr[],int n,T target){
	return __binarySearch(arr,0,n-1,target); 
} 



#endif
