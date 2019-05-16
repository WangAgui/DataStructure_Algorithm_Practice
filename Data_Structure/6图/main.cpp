#include <iostream>
#include"denseGraph.h"
#include"sparseGraph.h"
#include"ReadGraph.h"
#include<ctime>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string filename = "g1.txt";
	SparseGraph g1(13,false);
	ReadGraph<SparseGraph> readGraph1(g1,filename);
	g1.show();
	
	DenseGraph g2(13,false);
	ReadGraph<DenseGraph> readGraph2(g2,filename);
	g2.show();
	return 0;
}
