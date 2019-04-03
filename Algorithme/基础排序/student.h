#ifndef SELECTION_STUDENT_H
#define SELECTION_STUDENT_H
//
//Created by WangAgui 2019/4/2
//
//做一个学生的实体，便于对排序算法测试 
//
#include<string>

using namespace std;

struct Student{
	
	string name;
	int score;
	
	//重载<和<<运算符
	bool operator<(const Student &otherStudent)
	{
		return this->score<otherStudent.score;	
	} 
	
	friend ostream& operator<<(ostream&os,const Student &student)
	{
		os<<"Student: "<<student.name<<" "<<student.score;
		return os;
	}
	
};


#endif
