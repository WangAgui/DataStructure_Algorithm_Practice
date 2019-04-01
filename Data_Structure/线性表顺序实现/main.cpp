#include <iostream>
using namespace std;
#include "SqList.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	SqList L;
	if(InitList(L))
	{
	cout<<"表初始化成功......"<<endl;
	}
	
	cout<<"插入结果：....."<<endl; 
	for(int i=1;i<=23;i++)
	{
		ListInsert(L,i,i);
	}
	PrintList(L);
	ListInsert(L,10,133);
	cout<<"在10位置插入133结果：....."<<endl; 
	PrintList(L);
	cout<<"删除结果：....."<<endl;
	ElemType a = ListDelete(L,3);
	PrintList(L);
	return 0;
}
