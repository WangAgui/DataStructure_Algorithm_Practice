#ifndef QUICK_SORT_2_H
#define QUICK_SORT_2_H
// 
//Á½Â·¿ìÅÅ   create by WangAgui 2019/4/5 
// 

template<typename T>
int __partion2(T arr[],int l,int r){
	swap(arr[l],arr[rand()%(r-l+1)+l]);
	T v = arr[l];
	
	int i,j;//arr[l+1,i)<=v;arr(j,r]>=v;
	i=l+1,j=r;
	
	while(true){
		while(i<=r&& arr[i]<v){
			i++;
		}
		while(j>=l+1&&arr[j]>v){
			j--;
		}
		if(i>j) break;
		swap(arr[i],arr[j]);
		i++;
		j--;
		
	}
	
	swap(arr[l],arr[j]);
	return j;
}

template<typename T>
void __quickSort2(T arr[],int l,int r){
	if(r<=l)return;
	
	int p = __partion2(arr,l,r);
	__quickSort(arr,l,p-1);
	__quickSort(arr,p+1,r);	
}
template<typename T>
void quickSort2(T arr[],int n){
	srand(time(NULL));
	__quickSort2(arr,0,n-1);
} 


#endif

