#include "linklist.h"

LNode *LList::GetElem(int i)
{
	if(i<1||i>length)
	{
		cout<<"位置溢出！"<<endl;
		exit(OVERFLOW); 
	}
	
	LNode *current = head;
	
	while(i)
	{
		current = current->next;
	}
	return current;
	
}

Status LList::LinkInsert(ElemType x,int i)
{
	//先开辟一个小空间暂存这个结点 
	LNode *temp = (LNode*)malloc(sizeof(LNode));
	temp->data = x;
	temp->next =NULL;
	tailor->next = temp;
	tailor = temp;
	length++;   //长度加一 
	return OK;
	
}

void LList::Display()
{
	if(head==tailor)
	{
		cout<<"空链表!"<<endl; 
	}
	for(LNode *i = head->next;i!=NULL;i=i->next)
	{
		cout<<i->data<<" ";
	}
	cout<<endl;
}
