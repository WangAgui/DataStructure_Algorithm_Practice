#ifndef DOUBLE_LINK_LIST_H
#define DOUBLE_LINK_LIST_H

//
//双链表定义  create by Wang Agui 2019/4/2 
//

#include"common.h"
#include<cstdlib>
#include<iostream>
typedef int ElemType;
struct DList{
	ElemType data;
	struct DList *prior,*next;
}; 
//双向链表对单链表，双链表的结点拥有两个指针，prior和next
//其余大致相同，双链表也维护两个指针:head，tailor
//head与tailor两个指针的作用是初始化用尾插法 
class DoubleList{
	private:
		DList *head;
		DList *tailor;
		int length;
		
	public:
		DoubleList(ElemType arr[],int n){
			head = (DList*)malloc(sizeof(DList));
			tailor = head; 
			length =0;
			head->prior = NULL;
			head->next = NULL;
			for(int i=0;i<n;i++){
				DList *current =(DList*)malloc(sizeof(DList));
				current->data = arr[i];
				tailor->next = current;
				current->prior = tailor;
				current->next = NULL;
				tailor = current;
				length++;
			}
			std::cout<<"双向链表初始化成功"<<std::endl;
		}
		//按序号查找链表结点，返回对应的指针，为插入删除做准备 
		DList *GetElem(int i);
		//插入操作 
		Status DoubleLinkInsert(ElemType e,int i);
		//删除操作 
		Status DoubleLinkDelete(int i); 
		//展示链表元素内容 
		void Display();
	
	
};



#endif 
