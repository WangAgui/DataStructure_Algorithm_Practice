#ifndef DENSE_GRAPH_H_
#define DENSE_GRAPH_H_
//
//稠密图，使用邻接矩阵表示 ，这里实现的是无向图 
//
#include<iostream>
#include<vector>
#include<cassert>
using namespace std;

#define MaxVertexNum 100
typedef int EdgeType; //用一个int代表一个边，1表相连，0表不连
typedef char VertexType; 

class DenseGraph{
	
private:
	int vexnum,arcnum;//顶点数，边数 
	VertexType Vex[MaxVertexNum];//顶点集 
	EdgeType Edge[MaxVertexNum][MaxVertexNum];//边集 
public:
	//传入参数，定点个数 
	DenseGraph(){
		this->vexnum = 0;
		this->arcnum = 0;//后续设计添加边的方法 
		for(int i=0;i<MaxVertexNum;i++){
			for(int j=0;j<MaxVertexNum;j++){
				Edge[i][j] = 0;
			}
		}
	}
	~DenseGraph(){
		
	}
	//判断，x，y，之间是否存在边 
	bool Adjacent(VertexType x,VertexType y);
	//将与结点x邻接的边打印 
	void Neighbors(VertexType x); 
	//插入顶点
	void InsertVertex(VertexType x);
	//删除顶点
	void DeleteVertex(VertexType x);
	//若无边，添加边
	void AddEdge(VertexType x,VertexType y);
	//若存在(边)，删除边
	void RemoveEdge(VertexType x,VertexType y);
private:
	bool __isAdjacent(VertexType x,VertexType y){
		int i=__indexVertex(x);
		int j=__indexVertex(y);
		assert(i);
		assert(j);
		
		return Edge[i][j];
	} 
	
	int __indexVertex(VertexType test){
		if(vexnum == 0) return -1;
		bool ret = false;
		int i;
		for(i=0;i<vexnum;i++){
			if(Vex[i] == test){
				ret = true;
				break;
			}
		}
		if(ret == true){
			return i;
		}
		else{
			return -1;
		}
	} 
}; 


#endif
