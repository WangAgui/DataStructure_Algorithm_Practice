#ifndef SPARSE_GRAPH_H_
#define SPARSE_GRAPH_H_
#include<iostream>
#include<cassert>
//
//�ڽӱ�ʵ��ͼ�Ľṹ   
// 
using namespace std;
#define MaxVertexNum 100
typedef char VertexType; 
//�߱��� 
struct ArcNode{
	VertexType adjvex;
	ArcNode *next;
};
//������
struct VNode{
	VertexType data;
	ArcNode *first;
}; 
class SparseGraph{
	private:
		int vexnum,arcnum;
		VNode Vex[MaxVertexNum];
		
	public:
		SparseGraph(){
			this->vexnum = 0;
			this->arcnum = 0;
			
		}
		
		~SparseGraph(){
			
		}
		
		
};




#endif 
