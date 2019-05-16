#include<iostream>

using namespace std;

//int n = 10;

void test1(){
	n--;
} 
int test(){
	static int n = 10;
	test1();
	return n;
} 

int main(){
	test();
	
	cout<<n<<endl;
	
	return 0;
} 
