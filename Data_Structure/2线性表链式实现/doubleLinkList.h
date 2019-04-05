#ifndef DOUBLE_LINK_LIST_H
#define DOUBLE_LINK_LIST_H

//
//˫������  create by Wang Agui 2019/4/2 
//

#include"common.h"
#include<cstdlib>
#include<iostream>
typedef int ElemType;
struct DList{
	ElemType data;
	struct DList *prior,*next;
}; 
//˫������Ե�����˫����Ľ��ӵ������ָ�룬prior��next
//���������ͬ��˫����Ҳά������ָ��:head��tailor
//head��tailor����ָ��������ǳ�ʼ����β�巨 
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
			std::cout<<"˫�������ʼ���ɹ�"<<std::endl;
		}
		//����Ų��������㣬���ض�Ӧ��ָ�룬Ϊ����ɾ����׼�� 
		DList *GetElem(int i);
		//������� 
		Status DoubleLinkInsert(ElemType e,int i);
		//ɾ������ 
		Status DoubleLinkDelete(int i); 
		//չʾ����Ԫ������ 
		void Display();
	
	
};



#endif 
