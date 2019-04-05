#include"SqStack.h"
#include"common.h"
#include<iostream>
using namespace std;

SqStack::SqStack(){
	top =-1;  //注意初始化-1 
	cout<<"初始化空栈成功！！"<<endl; 
}

Status SqStack::is_Empty(){
	return top==-1;
}

Status SqStack::Push(ElemType e){
	try{
			if(top>=MaxSize-1)throw -1;
			else{
				data[++top] = e;
				return OK;
			} 
			
	}catch(...){
		cout<<"栈已满不可再入栈操作！！！"<<endl;
		return FALSE;
	}
}

ElemType SqStack::Pop(){
	try{
		if(top==-1) throw -1;
		else{
			return data[top--];
		}
	}catch(...){
		cout<<"栈空！！"<<endl;
	}
}

void SqStack::Display(){
	cout<<"当前栈的情况:"<<endl;
	cout<<"___"<<endl;
	int i=top;
	while(i!=-1){
		cout<<data[i]<<endl;
		i--;
	}
	cout<<"___"<<endl;
	
}





