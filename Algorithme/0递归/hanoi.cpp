#include<iostream>

using namespace std;
int step = 0;
void hanoi(int n,char A,char B,char C){
	if(n==1){
		cout<<A<<"->"<<C<<endl; 
		step++; 
	}
	else{
		hanoi(n-1,A,C,B);
		cout<<A<<"->"<<C<<endl;
		step++;
		hanoi(n-1,B,A,C);
	}
	
} 


int main(){
	hanoi(3,'a','b','c');
	cout<<"²½Êý£º"<<step<<endl; 
	return 0;
}
