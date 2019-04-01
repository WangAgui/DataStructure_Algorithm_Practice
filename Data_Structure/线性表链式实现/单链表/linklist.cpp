#include "linklist.h"

LNode *LList::GetElem(int i)
{
	if(i<1||i>length)
	{
		cout<<"λ�������"<<endl;
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
	//�ȿ���һ��С�ռ��ݴ������� 
	LNode *temp = (LNode*)malloc(sizeof(LNode));
	temp->data = x;
	temp->next =NULL;
	tailor->next = temp;
	tailor = temp;
	length++;   //���ȼ�һ 
	return OK;
	
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
