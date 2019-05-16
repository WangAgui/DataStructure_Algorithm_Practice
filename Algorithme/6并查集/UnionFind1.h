#ifndef UNION_FIND_H_1_
#define UNION_FIND_H_1_
#include<cassert>

//
//并查集简单实现思路 
// 
class UnionFind1{
	private:
		int *id;
		int count;
	
	public:
		UnionFind(int n){
			count = n;
			id = new int(n);
			for(int i=0;i<n;i++){
				id[i] = i;
			}
		}
	
		~UnionFind(){
			delete [] id;
		}
	
		int find(int p){
			assert(p>=0&&p<count);
			return id[p];
		}
		
		bool isConnected(int p,int q){
			return find(p) == find(q);
		}
		
		void unionElements(int p,int q){
			int pID =find(p);
			int qID =find(q);
			
			if(pID == qID) return ;
			
			for(int i=0;i<count;i++){
				if(id[i] == pID) id[i] =qID;
			}
		}
};





#endif
