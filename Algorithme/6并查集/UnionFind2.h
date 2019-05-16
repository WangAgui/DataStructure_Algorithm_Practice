#ifndef UNION_FIND_H_2_
#define UNION_FIND_H_2_
#include<cassert>
//
//并查集的常规实现思路   指向父亲节点构造一棵树 
//

class UnionFind2{
	private:
		int *parent;
		int count;
	
	public:
		UnionFind(int n){
			count = n;
			parent = new int(n);
			for(int i=0;i<n;i++){
				parent[i] = i;
			}
		}
	
		~UnionFind(){
			delete [] parent;
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
			
			parent[pRoot] = qRoot;
		}
};
#endif
