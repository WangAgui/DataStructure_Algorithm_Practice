#include "common.h"
#include <iostream>
#include <cstdlib> 
using namespace std;

typedef int ElemType;
///创建一个链表节点 
typedef struct LNode{
	ElemType data;
	struct LNode* next;
}LNode;


class LList{
	private:
		//只需要维护一个表头，表尾 
		LNode *head;
		LNode *tailor;
		int length;	
	public:
		//初始化，建表 
		LList()
		{
			head = (LNode*)malloc(sizeof(LNode));
			tailor = head;//最开始的时候，链表为空，表尾指向表头 
			head->next = NULL;
			length = 0;
			cout<<"初始化成功!"<<endl; 
		}
		
		//按序号查找链表结点，返回对应的指针 
		LNode *GetElem(int i);
		//按值查找链表结点，返回对应指针
		LNode *LocateElem(LNode * L,ElemType e);
		//插入操作，将值为x的新结点插入到第i个位置上
		Status LinkInsert(ElemType x,int i);
		
		
		 
		//打印链表里的内容
		void Display();
	
};
