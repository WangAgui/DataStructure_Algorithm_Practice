#include <iostream>
#include "DenseGraph.h"

using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	DenseGraph g;
	g.InsertVertex('a');
	g.InsertVertex('b');
	g.AddEdge('a','b');
	
	if(g.Adjacent('a','b')){
		cout<<"hello world"; 
	}
	return 0;
}
