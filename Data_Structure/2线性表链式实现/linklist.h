#include "common.h"
#include <iostream>
#include <cstdlib> 
using namespace std;
//
//单链表定义以及部分实现 create by Wang Agui 2019/4/1 
// 

typedef struct LNode{
	ElemType data;
	struct LNode* next;
}LNode;


class LList{
	private:
		//只需要维护一个表头，表尾，两个指针 
		LNode *head;
		LNode *tailor;
		int length;	
	public:
		//初始化，建表 
		LList(ElemType arr[],int n)
		{
			head = (LNode*)malloc(sizeof(LNode));//创建一个空的，头节点 
			tailor = head;//最开始的时候，链表为空，表尾指向表头 
			head->next = NULL;
			for(int i=0;i<n;i++){
				LNode *current = (LNode*)malloc(sizeof(LNode));
				current->data = arr[i];
				tailor->next = current;
				current->next =NULL;
				tailor = current;
				
				length++;
			}
			cout<<"初始化成功!"<<endl; 
		}
		
		//按序号查找链表结点，返回对应的指针，为插入删除做准备 
		LNode *GetElem(int i);

		//插入操作，将值为x的新结点插入到第i个位置上
		Status LinkInsert(ElemType x,int i);
		//删除，将第i位置上的元素删除 
		Status LinkDelete(int i); 
		//判空 
		Status is_Empty(); 
		//打印链表里的内容
		void Display();
	
};
