#include <iostream>
#include "linklist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	LList test;
	for(int i=0;i<234;i++)
	{
		test.LinkInsert(i,i+1);
	}
	test.Display();
	return 0;
}
