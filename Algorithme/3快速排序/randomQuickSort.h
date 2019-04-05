#ifndef RANDOM_QUICK_SORT_H
#define RANDOM_QUICK_SORT_H
//
//对于quickSort.h的简单快排，在最坏情况下递归树退化到了n2
//在数组近乎有序时，效率退化到了O(n^2) 
//现在进行改进，基数的选择为随机的，不再是选择最左边的元素 
//不同之处在第12行和39行 
//返回p，使得p左边都比p小，p右边都比p大 
template<typename T>
int ___partition(T arr[],int l,int r){
	
	swap(arr[l],arr[rand()%(r-l+1)+l]);
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
void ___quickSort(T arr[],int l,int r){
	if(l>=r)return;
	
	int p = __partition(arr,l,r);
	__quickSort(arr,l,p-1);
	__quickSort(arr,p+1,r);
}

template<typename T>
void RandomQuickSort(T arr[],int n){
	srand(time(NULL));
	___quickSort(arr,0,n-1);
}

 



#endif 
