#ifndef UNION_FIND_H_3_
#define UNION_FIND_H_3_
#include<cassert>
//
//并查集的常规实现思路   指向父亲节点构造一棵树 
//基于size的优化 

class UnionFind3{
	private:
		int *parent;
		int *sz;//sz[i] 表示以i为根的子节点个数 
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
		//找根 
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
