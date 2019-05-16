#ifndef BINARY_SEARCH_H_
#define BINARY_SEARCH_H_

//����������arr�в���target�����ҵ���������Ӧ���������򷵻�-1 
template<typename T>
int binarySearch(T arr[],int n,int target){
	//��arr[l,r]֮�в���target 
	int l=0,r=n-1;
	
	while(l<=r){
		//int mid = (r+l)/2; ���ַ�ʽ����ȡ����Ϊ�� 
		int mid = l+(r-l)/2;
		if(arr[mid] == target) return mid;
		//��������СΪarr[l..mid-1] 
		if(target<arr[mid]) r=mid-1;
		//����Χ��С��arr[mid+1,r] 
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
//�ݹ鷽ʽ 
template<typename T>
int binarySearch1(T arr[],int n,T target){
	return __binarySearch(arr,0,n-1,target); 
} 



#endif
