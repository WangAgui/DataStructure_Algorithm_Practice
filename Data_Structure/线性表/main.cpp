#include <iostream>
using namespace std;
#include "SqList.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	SqList L;
	if(InitList(L))cout<<"�ɹ���ʼ����������"<<endl;
	
	

	for(int i=1;i<=10;i++)
	{
		ListInsert(L,i,i);
	}

	ListInsert(L,1,100);
	
	
	PrintList(L);
	return 0;
}
