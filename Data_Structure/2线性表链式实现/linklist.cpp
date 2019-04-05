#include "linklist.h"

//
//单链表功能实现  create by Wang Agui 2018/4/1 
// 


LNode *LList::GetElem(int i)
{
	if(i<0||i>length)
	{
		cout<<"位置溢出！"<<endl;
		exit(OVERFLOW); 
	}
	
	LNode *current = head;
	
	while(i)
	{
		current = current->next;
		i--; 
	}
	return current;
	
}

Status LList::LinkInsert(ElemType x,int i)
{
	if(i<1||i>length+1){
		std::cout<<"插入位置错误!!";
		exit(OVERFLOW);
	}
	//先开辟一个小空间暂存这个结点 
	LNode *current = (LNode*)malloc(sizeof(LNode));
	LNode *prior = GetElem(i-1);
	current->data = x;
	current->next = prior->next;
	prior->next = current;
	length++;   //长度加一 
	return OK;
	
}


Status LList::is_Empty(){
	
	return (head==tailor);
}

Status LList::LinkDelete(int i){
	if(i<1||i>length){
		cout<<"删除元素位置错误!"<<endl; 
	}
	
	LNode *p = GetElem(i-1);
	LNode *q = p->next;
	p->next  = q->next;
	free(q);
	
	
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
