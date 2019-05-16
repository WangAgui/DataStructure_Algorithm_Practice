#include<iostream>
using namespace std;

struct node{
	int n;
	node *next;
	node(int x){
		this->n = x; 
		this->next = NULL;
	}
};
int main(){
	node *p1 = new node(4);
	node *p2 = new node(5);
	p1->next = p2;
	delete p2;
	cout<<NULL<<endl;
	cout<<p1->next->n<<endl;
	delete p1;
	
	
	return 0;
}
