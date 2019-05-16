#ifndef SPARSE_GRAPH_H_
#define SPARSE_GRAPH_H_
#include<iostream>
#include<cassert>
//
//邻接表实现图的结构   
// 
using namespace std;
#define MaxVertexNum 100
typedef char VertexType; 
//边表结点 
struct ArcNode{
	VertexType adjvex;
	ArcNode *next;
};
//顶点结点
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
