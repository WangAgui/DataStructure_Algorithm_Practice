#ifndef UNION_FIND_H_3_
#define UNION_FIND_H_3_
#include<cassert>
//
//���鼯�ĳ���ʵ��˼·   ָ���׽ڵ㹹��һ���� 
//����size���Ż� 

class UnionFind3{
	private:
		int *parent;
		int *sz;//sz[i] ��ʾ��iΪ�����ӽڵ���� 
		int count;
	
	public:
		UnionFind(int n){
			count = n;
			parent = new int[n];
			sz = new int[n];
			for(int i=0;i<n;i++){
				parent[i] = i;
				sz[i] = i;
			}
		}
	
		~UnionFind(){
			delete [] parent;
			delete [] sz;
		}
		//�Ҹ� 
		int find(int p){
			assert(p>=0&&p<count);
			while(p!=parent[p]){
				p = parent[p];
			}
			
			return p;
		}
		
		bool isConnected(int p,int q){
			return find(p) == find(q);
		}
		
		void unionElements(int p,int q){
			int qRoot = find(q);
			int pRoot = find(p);
			
			if(pRoot == qRoot) return;
			
			if(sz[pRoot]<sz[qRoot]){
				parent[pRoot] = qRoot;
				sz[qRoot] +=sz[pRoot];
			}
			else{
				parent[qRoot] = pRoot;
				sz[pRoot = sz[qRoot]];
			}
		}
};
#endif
