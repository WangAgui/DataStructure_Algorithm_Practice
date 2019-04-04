/*                ���Ա�̬�ڴ����˳��洢�ṹ               */

#include "common.h"
#include <cstdlib>

#define ElemType int
 
#define LIST_INIT_SIZE	10	//���Ա�洢�ռ�ĳ�ʼ������
#define LISTINCREMENT	10	//���Ա�洢�ռ�ķ�������
 
typedef struct{
	ElemType* elem;	//�洢�ռ��ַ
	int length;			//��ǰ����
	int listsize;		//��ǰ����Ĵ洢��������sizeof(ElemType)Ϊ��λ��
} SqList;


Status InitList(SqList &L);
	//�������������һ���յ����Ա�L��
 
Status DestroyList(SqList &L);
	//��ʼ���������Ա�L�Ѵ��ڡ�
	//����������������Ա�L��
 
 
bool ListEmpty(SqList L);
	//��ʼ���������Ա�L�Ѵ��ڡ�
	//�����������LΪ�ձ��򷵻�TRUE�����򷵻�FALSE��
 
int ListLength(SqList L);
	//��ʼ���������Ա�L�Ѵ��ڡ�
	//�������������L������Ԫ�صĸ�����
 
ElemType GetElem(SqList L, int i);
	//��ʼ���������Ա�L�Ѵ��ڣ�1<=i<=ListLength(L)��
 
Status ListInsert(SqList &L, int i, ElemType e);
	//��ʼ���������Ա�L�Ѵ��ڣ�1<=i<=ListLength(L)+1.
	//�����������L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�1.
 
ElemType ListDelete(SqList &L, int i);
	//��ʼ���������Ա�L�Ѵ����ҷǿգ�1<=i<=ListLength(L).
	//���������ɾ��L�ĵ�i������Ԫ�أ�������ɾ����ֵ 
 

void PrintList(SqList L);
	//�����Ա��ڲ��������ݴ�ӡ 
