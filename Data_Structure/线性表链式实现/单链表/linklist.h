#include "common.h"
#include <iostream>
#include <cstdlib> 
using namespace std;

typedef int ElemType;
///����һ������ڵ� 
typedef struct LNode{
	ElemType data;
	struct LNode* next;
}LNode;


class LList{
	private:
		//ֻ��Ҫά��һ����ͷ����β 
		LNode *head;
		LNode *tailor;
		int length;	
	public:
		//��ʼ�������� 
		LList()
		{
			head = (LNode*)malloc(sizeof(LNode));
			tailor = head;//�ʼ��ʱ������Ϊ�գ���βָ���ͷ 
			head->next = NULL;
			length = 0;
			cout<<"��ʼ���ɹ�!"<<endl; 
		}
		
		//����Ų��������㣬���ض�Ӧ��ָ�� 
		LNode *GetElem(int i);
		//��ֵ���������㣬���ض�Ӧָ��
		LNode *LocateElem(LNode * L,ElemType e);
		//�����������ֵΪx���½����뵽��i��λ����
		Status LinkInsert(ElemType x,int i);
		
		
		 
		//��ӡ�����������
		void Display();
	
};
