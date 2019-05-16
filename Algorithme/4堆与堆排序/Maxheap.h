#ifndef MAX_HEAP_H_
#define MAX_HEAP_H_
//
//��  create by Wang Agui 2019/4/6
//��Ҫ���ڶ�̬����ά����������������Ч�ʵ��ڿ���
// 
#include<cassert>
#include<algorithm>
using namespace std;
template<typename Item>
class MaxHeap{
	private:
		Item *data;
		int count;
		int capacity;
		void shiftUp(int k){
			while(k>1&&data[k/2] <data[k]){
				swap(data[k/2],data[k]);
				k/=2;
			}
			
		}
		void shiftDown(int k){
			while(2*k<=count){
				int j=2*k;
				if(j+1<=count&&data[j]<data[j+1]){
					j+=1;
				}
				
				if(data[k]>=data[j])
					break;
				
				swap(data[k],data[j]);
				k = j;
			}
		}
	public:
		MaxHeap(int capacity){
			data = new Item[capacity+1];
			count = 0;	
			this->capacity = capacity;
		}
		//������ѻ� heapify
		MaxHeap(Item arr[],int n){
			data = new Item[n+1];
			capacity = n;
			for(int i=0;i<n;i++){
				data[i+1] = arr[i];
			}
			
			count = n;
			
			for(int i = count/2;i>=1;i--) //�˴�count/2�����ԣ�Ϊ���е�һ��Ҷ�ӽ�� 
				shiftDown(i); 
		}
		
		~MaxHeap(){
			delete [] data;
		}	
		//
		void insert(Item item){
			assert(count+1<=capacity);
			data[count+1] = item;
			count++;
			//shift up(�¼ӵ�Ԫ���ƻ��˶ѵĶ��壬��Ҫshift up����) 
			shiftUp(count);
		}
		
		Item extractMax(){
			assert(count!=0);
			Item ret = data[1];
			data[1] = data[count];
			count--;
			shiftDown(1);
			return ret;
		} 
		
		int size(){
			return count;
		}		
		
		bool isEmpty(){
			return count ==0;
		}
			
		void display(){
			for(int i=1;i<count;i++){
				cout<<data[i]<<" ";
			}
			cout<<endl;
		}
};

#endif 

