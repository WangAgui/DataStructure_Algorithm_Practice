#ifndef DENSE_GRAPH_H_
#define DENSE_GRAPH_H_
//
//����ͼ��ʹ���ڽӾ����ʾ ������ʵ�ֵ�������ͼ 
//
#include<iostream>
#include<vector>
#include<cassert>
using namespace std;

#define MaxVertexNum 100
typedef int EdgeType; //��һ��int����һ���ߣ�1��������0����
typedef char VertexType; 

class DenseGraph{
	
private:
	int vexnum,arcnum;//������������ 
	VertexType Vex[MaxVertexNum];//���㼯 
	EdgeType Edge[MaxVertexNum][MaxVertexNum];//�߼� 
public:
	//���������������� 
	DenseGraph(){
		this->vexnum = 0;
		this->arcnum = 0;//���������ӱߵķ��� 
		for(int i=0;i<MaxVertexNum;i++){
			for(int j=0;j<MaxVertexNum;j++){
				Edge[i][j] = 0;
			}
		}
	}
	~DenseGraph(){
		
	}
	//�жϣ�x��y��֮���Ƿ���ڱ� 
	bool Adjacent(VertexType x,VertexType y);
	//������x�ڽӵıߴ�ӡ 
	void Neighbors(VertexType x); 
	//���붥��
	void InsertVertex(VertexType x);
	//ɾ������
	void DeleteVertex(VertexType x);
	//���ޱߣ���ӱ�
	void AddEdge(VertexType x,VertexType y);
	//������(��)��ɾ����
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
