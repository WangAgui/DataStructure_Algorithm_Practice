#ifndef UNION_FIND_H_
#define UNION_FIND_H_
#include<cassert>
//
//并查集 大名鼎鼎 路径压缩 
//在find的过程中，想办法把结点向上挪
//
class UnionFind{
	private:
		int *parent;
		int *rank;//层数 
		int count;
	
	public:
		UnionFind(int n){
			count = n;
			parent = new int(n);
			rank = new int(n); 
			for(int i=0;i<n;i++){
				parent[i] = i;
				rank[i] = 1;
			}
		}
	
		~UnionFind(){
			delete [] parent;
			delete [] rank;
		}
		//找根 
		int find(int p){
			assert(p>=0&&p<count);
			while(p!=parent[p]){
				parent[p] = parent[parent[p]];//压缩过程 
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
			
			if(rank[pRoot]<rank[qRoot]){
				parent[pRoot] = qRoot;
			}
			else if(rank[qRoot]<rank[pRoot]){
				parent[qRoot] = pRoot;
			}
			else{
				parent[pRoot] = qRoot;
				rank[qRoot] +=1;
			}
		}
}; 






#endif
