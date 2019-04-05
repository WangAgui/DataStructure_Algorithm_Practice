#include <iostream>
#include "SqStack.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	SqStack s;
	for(int i=0;i<9;i++){
		s.Push(i);
	}
	cout<<s.Pop()<<endl;
	s.Display();
	return 0;
}
