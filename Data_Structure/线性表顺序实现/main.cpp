#include <iostream>
using namespace std;
#include "SqList.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	SqList L;
	if(InitList(L))
	{
	cout<<"���ʼ���ɹ�......"<<endl;
	}
	
	cout<<"��������....."<<endl; 
	for(int i=1;i<=23;i++)
	{
		ListInsert(L,i,i);
	}
	PrintList(L);
	ListInsert(L,10,133);
	cout<<"��10λ�ò���133�����....."<<endl; 
	PrintList(L);
	cout<<"ɾ�������....."<<endl;
	ElemType a = ListDelete(L,3);
	PrintList(L);
	return 0;
}
