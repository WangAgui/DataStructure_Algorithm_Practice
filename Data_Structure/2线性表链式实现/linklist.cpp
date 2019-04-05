#include "linklist.h"

//
//��������ʵ��  create by Wang Agui 2018/4/1 
// 


LNode *LList::GetElem(int i)
{
	if(i<0||i>length)
	{
		cout<<"λ�������"<<endl;
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
		std::cout<<"����λ�ô���!!";
		exit(OVERFLOW);
	}
	//�ȿ���һ��С�ռ��ݴ������� 
	LNode *current = (LNode*)malloc(sizeof(LNode));
	LNode *prior = GetElem(i-1);
	current->data = x;
	current->next = prior->next;
	prior->next = current;
	length++;   //���ȼ�һ 
	return OK;
	
}


Status LList::is_Empty(){
	
	return (head==tailor);
}

Status LList::LinkDelete(int i){
	if(i<1||i>length){
		cout<<"ɾ��Ԫ��λ�ô���!"<<endl; 
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
		cout<<"������!"<<endl; 
	}
	for(LNode *i = head->next;i!=NULL;i=i->next)
	{
		cout<<i->data<<" ";
	}
	cout<<endl;
}
