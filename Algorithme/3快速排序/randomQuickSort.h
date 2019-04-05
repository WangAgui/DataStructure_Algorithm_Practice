#ifndef RANDOM_QUICK_SORT_H
#define RANDOM_QUICK_SORT_H
//
//����quickSort.h�ļ򵥿��ţ��������µݹ����˻�����n2
//�������������ʱ��Ч���˻�����O(n^2) 
//���ڽ��иĽ���������ѡ��Ϊ����ģ�������ѡ������ߵ�Ԫ�� 
//��֮ͬ���ڵ�12�к�39�� 
//����p��ʹ��p��߶���pС��p�ұ߶���p�� 
template<typename T>
int ___partition(T arr[],int l,int r){
	
	swap(arr[l],arr[rand()%(r-l+1)+l]);
	//�����ʵ�Ԫ�أ�i
	//arr[l+1..j]<v  arr[j+1..i)>v 
	T v = arr[l];
	int j =l;//����l�ĳ�ʼ���ǳ����� 
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
