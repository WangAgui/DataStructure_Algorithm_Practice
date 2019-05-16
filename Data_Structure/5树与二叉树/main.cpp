#include <iostream>
#include"BiTree.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char pre[9] ={'A','B','C','D','E','F','G','H','I'};
	char in[9]  ={'B','C','A','E','D','G','H','F','I'};
	
	BiTree test = BiTree(pre,in,9);
	
	test.PreOrder();
	cout<<endl;
	test.InOrder();
	cout<<endl;
	test.LevelOrder();
	cout<<endl;
	test.PreOrder1();
	cout<<endl;
	test.InOrder1();
	return 0;
}
