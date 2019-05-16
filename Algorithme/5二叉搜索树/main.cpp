#include <iostream>
#include "BinarySearch.h"
#include "binarySearchTree.h"

#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BST<int,int> test;
	
	int a[11] ={28,16,30,9,22,29,42,6,11,19,45};
//	int b[11] ={}
	for(int i=0;i<11;i++){
		test.insert(a[i],i);
	}
	test.preOrder();
	cout<<endl;
	
	test.remove(30);
	test.preOrder();
	return 0;
}
