#include"queue.h"
#include<iostream>
#include<cstdlib>
using namespace std;
Queue::Queue(){
	front = (QueueNode*)malloc(sizeof(QueueNode));
	rear = front;
	front->next = NULL;
	cout<<"���г�ʼ���ɹ�"<<endl;
}

bool Queue::is_empty(){
	
	return front == rear;
}

void Queue::Enqueue(ElemType e){
	QueueNode *current = (QueueNode*)malloc(sizeof(QueueNode));
	current->data =e;
	current->next = NULL;
	rear->next = current;
	rear=current;
}

ElemType Queue::Dequeue(){
	try{
		if(front==rear)throw -1;
		else{
			QueueNode *f = front;
			front = front->next;
			free(f);
			return front->data;
		}
	}catch(...){
		cout<<"���пգ���"<<endl; 
	}
}

void Queue::Display(){
	if(front == rear){
		cout<<"�ն��У���"<<endl;
	}
	else{
		QueueNode *iterate = front->next;
		do{
			cout<<iterate->data<<" "; 
			iterate = iterate->next;
		}while(iterate!=NULL);
		cout<<endl;
	}
}
