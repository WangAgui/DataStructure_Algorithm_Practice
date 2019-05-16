#include <iostream>
#include"queue.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Queue q;
	q.Display();
	for(int i=0;i<10;i++){
		q.Enqueue(i+1);
	}
	q.Dequeue();
	q.Display();
	return 0;
}
