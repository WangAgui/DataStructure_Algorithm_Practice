#include <iostream>
#include "common.h"
#include "linklist.h"
#include "doubleLinkList.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//对单链表双链表分别进行测试 
	int a[5] ={1,3,5,2,6};
	
	
	DoubleList DList(a,5);
	DList.DoubleLinkInsert(4,3);
	DList.Display();
	DList.DoubleLinkDelete(3);
	DList.Display();

	LList List(a,5);
	List.LinkInsert(2,5);
	List.LinkDelete(1);
	List.Display();

	return 0;
}



