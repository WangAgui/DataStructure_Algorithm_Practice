#include"doubleLinkList.h"
//
//双链表实现 create by Wang Agui 2019/4/2 
//
#include<iostream>
using namespace std;
DList* DoubleList::GetElem(int i){
	if(i<0||i>length)
	{
		cout<<"位置溢出！"<<endl;
		exit(OVERFLOW); 
	}
	
	DList *current = head;
	
	while(i)
	{
		current = current->next;
		i--; 
	}
	return current;
	
}
void DoubleList::Display()
{
	if(head==tailor)
	{
		std::cout<<"空链表!"<<std::endl; 
	}
	for(DList *i = head->next;i!=NULL;i=i->next)
	{
		std::cout<<i->data<<" ";
	}
	std::cout<<std::endl;
}


Status DoubleList::DoubleLinkInsert(ElemType e,int i){

	if(i<1||i>length+1){
		std::cout<<"插入位置错误!!";
		exit(OVERFLOW);
	}
	
	//先开辟一个小空间暂存这个结点 
	DList *current = (DList*)malloc(sizeof(DList));
	if(!current){
		cout<<"内存申请失败！！"<<endl; 
	}
	current->data = e;
	
	DList *p = GetElem(i-1);
	if(p->next==NULL){
		p->next = current;
		current->prior = p;
		current->next = NULL;
	}
	else{
		current->next = p->next;
		p->next->prior = current;
		current->prior = p;
		p->next = current;
	}
	length++;
	return OK;
	
}

Status DoubleList::DoubleLinkDelete(int i){
	
	DList *del = GetElem(i);
	
	if(del->next!=NULL){
		del->prior->next =del->next;
		del->next = del->prior;
		free(del);
	}
	else{
		del->prior->next = NULL;
		free(del);
	}
	return OK;
	
}
