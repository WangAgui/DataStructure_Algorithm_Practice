#include"DenseGraph.h"
#include<cassert>

bool DenseGraph::Adjacent(VertexType x,VertexType y){
	int i= __indexVertex(x);
	int j= __indexVertex(y);
	
	if(this->Edge[i][j]){
		return true;
	}
	else{
		return false;
	}
	
} 

void DenseGraph::InsertVertex(VertexType x){
	int exist = __indexVertex(x);
	if(!exist){
		try{
		if(++vexnum>MaxVertexNum) throw -1;
		}
		catch(...){
			cout<<"图结点数已到达最大结点"<<endl; 
		}
		
		Vex[vexnum] = x;
	}
}

void DenseGraph::AddEdge(VertexType x,VertexType y){
	if(!__isAdjacent(x,y)){
		int i = __indexVertex(x);
		int j = __indexVertex(y);
		Edge[i][j] = 1;
		Edge[j][i] = 1;
	}
}
