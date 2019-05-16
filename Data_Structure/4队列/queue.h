#ifndef QUEUE_H_
#define QUEUE_H_
#include"common.h"
//
//����(��ʽʵ��)   create by Wang Agui 2019/4/5
// 
struct QueueNode{
	ElemType data;
	QueueNode *next;
}; 

class Queue{
	//First In First Out
	private:
		QueueNode *front,*rear;
	public:
		Queue();
		bool is_empty();
		void Enqueue(ElemType e);
		ElemType Dequeue();
		ElemType Gethead();
		
		void Display();
};




#endif
