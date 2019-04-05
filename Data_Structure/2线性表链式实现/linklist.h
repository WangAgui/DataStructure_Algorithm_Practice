#include "common.h"
#include <iostream>
#include <cstdlib> 
using namespace std;
//
//���������Լ�����ʵ�� create by Wang Agui 2019/4/1 
// 

typedef struct LNode{
	ElemType data;
	struct LNode* next;
}LNode;


class LList{
	private:
		//ֻ��Ҫά��һ����ͷ����β������ָ�� 
		LNode *head;
		LNode *tailor;
		int length;	
	public:
		//��ʼ�������� 
		LList(ElemType arr[],int n)
		{
			head = (LNode*)malloc(sizeof(LNode));//����һ���յģ�ͷ�ڵ� 
			tailor = head;//�ʼ��ʱ������Ϊ�գ���βָ���ͷ 
			head->next = NULL;
			for(int i=0;i<n;i++){
				LNode *current = (LNode*)malloc(sizeof(LNode));
				current->data = arr[i];
				tailor->next = current;
				current->next =NULL;
				tailor = current;
				
				length++;
			}
			cout<<"��ʼ���ɹ�!"<<endl; 
		}
		
		//����Ų��������㣬���ض�Ӧ��ָ�룬Ϊ����ɾ����׼�� 
		LNode *GetElem(int i);

		//�����������ֵΪx���½����뵽��i��λ����
		Status LinkInsert(ElemType x,int i);
		//ɾ��������iλ���ϵ�Ԫ��ɾ�� 
		Status LinkDelete(int i); 
		//�п� 
		Status is_Empty(); 
		//��ӡ�����������
		void Display();
	
};
