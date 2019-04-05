#ifndef SQ_STACK_H_
#define SQ_STACK_H_
//
//˳��ջ  create by Wang Agui 2019/4/5
// 
#include"common.h"
#define MaxSize 50
class SqStack{
	private:
		ElemType data[MaxSize];
		int top;
	public:
		SqStack();//�����ջ
		Status is_Empty();//�п�
		Status Push(ElemType);//��ջ
		ElemType Pop();//��ջ
		ElemType GetTop();//���ջ��Ԫ��
		Status ClearStack();//���ջ
		
		void Display();		
};


#endif 
