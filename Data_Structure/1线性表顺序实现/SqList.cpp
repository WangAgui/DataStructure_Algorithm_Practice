#include "SqList.h"
#include <iostream> 
Status InitList(SqList &L)
{
	L.elem =(ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
//	L.elem = new ElemType[LIST_INIT_SIZE]; 
	if(!L.elem) exit(OVERFLOW); 
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	
	return OK; 
}
Status DestroyList(SqList &L)
{
//	delete[] L.elem;
	free(L.elem);
	return OK;
}

Status ListInsert(SqList &L, int i, ElemType e)
{
	//�����жϲ����Ƿ�Ϸ�  i�ķ�Χ   1<=i<=L.length+1
	if(i<1||i>L.length+1)
	{
		std::cout<<"����λ�ò��Ϸ�,Wrong";
		exit(OVERFLOW);	
	}
	
	//�жϵ�ǰ�����Ƿ�����
	if(L.length >= L.listsize)
	{
/*	 
		ElemType * temp = new ElemType[L.listsize];
		memcpy(temp,L.elem,sizeof(L.elem));
		DestroyList(L);
		L.listsize+=LISTINCREMENT;
		L.elem = new ElemType[L.listsize];
		memcpy(L.elem,temp,sizeof(temp));
		
		delete[] temp;
*/	
		L.elem = (ElemType*)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(ElemType));
		L.listsize+=LISTINCREMENT; 
	} 
	//ִ�в������ 
	for(int j = L.length;j>=i;j--)
	{
		L.elem[j] = L.elem[j-1];
	}
	L.elem[i-1] = e;
	L.length++;
	return OK;
}

ElemType ListDelete(SqList &L, int i)
{
	//�����ж�ɾ���Ƿ�Ϸ�  i�ķ�Χ   1<=i<=L.length+1
	if(i<1||i>L.length)
	{
		std::cout<<"ɾ����λ�ò��Ϸ�,Wrong";
		exit(OVERFLOW);	
	}
	ElemType ret = L.elem[i-1];
	for(int j=i-1;j<=L.length-1;j++)
	{
		L.elem[j] = L.elem[j+1];
	} 
	
	L.length--; 
	
	return ret;
}


bool ListEmpty(SqList L)
{
	if(L.length == 0) return true;
	else return false; 
} 

int ListLength(SqList L)
{
	return L.length;
}

ElemType GetElem(SqList L, int i)
{
	if(i<1||i>L.length)
	{
		std::cout<<"Index overflowing........Wrong!";
		exit(OVERFLOW); 
	}
	
	return L.elem[i-1];
}


void PrintList(SqList L)
{
	for(int i=0;i<L.length;i++)
	{
		std::cout<<L.elem[i]<<" ";
	}
	std::cout<<std::endl;
}
