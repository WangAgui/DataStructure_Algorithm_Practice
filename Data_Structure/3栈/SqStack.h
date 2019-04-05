#ifndef SQ_STACK_H_
#define SQ_STACK_H_
//
//顺序栈  create by Wang Agui 2019/4/5
// 
#include"common.h"
#define MaxSize 50
class SqStack{
	private:
		ElemType data[MaxSize];
		int top;
	public:
		SqStack();//构造空栈
		Status is_Empty();//判空
		Status Push(ElemType);//入栈
		ElemType Pop();//出栈
		ElemType GetTop();//获得栈顶元素
		Status ClearStack();//清空栈
		
		void Display();		
};


#endif 
