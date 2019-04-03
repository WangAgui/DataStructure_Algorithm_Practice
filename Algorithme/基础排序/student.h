#ifndef SELECTION_STUDENT_H
#define SELECTION_STUDENT_H
//
//Created by WangAgui 2019/4/2
//
//��һ��ѧ����ʵ�壬���ڶ������㷨���� 
//
#include<string>

using namespace std;

struct Student{
	
	string name;
	int score;
	
	//����<��<<�����
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
