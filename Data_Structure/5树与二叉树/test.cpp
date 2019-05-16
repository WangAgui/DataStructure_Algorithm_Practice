#include<iostream>
#include<queue>
#include<cstdlib>
using namespace std;

struct Node{
	char a;
	Node *next;
};
int main(){
	queue<Node*> q;
	Node *test = (Node*)malloc(sizeof(Node));
	test->a = 'b';
	Node *test1 = (Node*)malloc(sizeof(Node));
	test1->a = 'c';
	test->next = test1;
	
	q.push(test);
	cout<<q.front()->a<<endl;
	q.push(test1);
	q.pop();
	cout<<q.front()->a<<endl;
	
	delete test,test1;
	return 0;
} 
