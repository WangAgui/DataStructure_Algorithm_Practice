#include"SqStack.h"
#include"common.h"
#include<iostream>
using namespace std;

SqStack::SqStack(){
	top =-1;  //ע���ʼ��-1 
	cout<<"��ʼ����ջ�ɹ�����"<<endl; 
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
		cout<<"ջ������������ջ����������"<<endl;
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
		cout<<"ջ�գ���"<<endl;
	}
}

void SqStack::Display(){
	cout<<"��ǰջ�����:"<<endl;
	cout<<"___"<<endl;
	int i=top;
	while(i!=-1){
		cout<<data[i]<<endl;
		i--;
	}
	cout<<"___"<<endl;
	
}





