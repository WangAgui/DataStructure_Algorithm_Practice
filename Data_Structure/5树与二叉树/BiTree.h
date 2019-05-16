#ifndef BI_TREE_H_
#define BI_TREE_H_
#include "common.h"
#include<iostream>
#include<cstdlib>
#include<queue>
#include<stack>
using namespace std;
//
//普通二叉树 create by Wang Agui 2019/4/7
// 
struct BiTNode{
	char data;
	BiTNode *lchild,*rchild;
};
class BiTree{
	private:
		BiTNode *root;
		
		BiTNode *__construct(char *pre,char *in,int n){
			if(n<=0){
				return NULL;
			}
			BiTNode *b = (BiTNode*)malloc(sizeof(BiTNode));	
			b->data = *pre;
			
			char *p;
			int k=0;
			for(p =in;p<in+n;p++){
				if(*p == *pre)
					break;
			}
			k = p-in;//k确定出左子树结点个数 
			b->lchild = __construct(pre+1,in,k);
			b->rchild = __construct(pre+k+1,p+1,n-k-1);
			return b;
		}
			
		void __visit(ElemType data){
			std::cout<<data<<" "; 
		}
		
		void __preorder(BiTNode *root){
			if(root!=NULL){		
				__visit(root->data);
				__preorder(root->lchild);
				__preorder(root->rchild);
			}
		}
		
		void __inorder(BiTNode *root){
			if(root!=NULL){
				__inorder(root->lchild);
				__visit(root->data);
				__inorder(root->rchild);
			}
		}
	public:
		//创建一个空树 
		BiTree(){
			root = NULL;
		}
		//根据先序序列和中序序列确定一颗二叉树
		BiTree(char *pre,char *in,int n){
			this->root = __construct(pre,in,n);
			
		}
		//前序遍历并打印结果 
		void PreOrder(){
			__preorder(this->root);
		}
		//中序遍历并打印结果 
		void InOrder(){
			__inorder(this->root);
		}
		
		
		//层序遍历，用到了辅助队列 
		void LevelOrder(){
			queue<BiTNode*> q;
				
			q.push(root);
			while(!q.empty()){
				BiTNode *p = q.front(); 
				__visit(p->data);
				if(p->lchild) {
					q.push(p->lchild);
				}
				if(p->rchild) q.push(p->rchild);
				q.pop();
			}
		}
		
		//用栈模拟递归的先序遍历 
		void PreOrder1(){
			
			stack<BiTNode*> s;
			s.push(root);
			while(!s.empty()){
				BiTNode *p = s.top();
				s.pop();
				__visit(p->data);
				if(p->rchild!=NULL) s.push(p->rchild);
				if(p->lchild!=NULL) s.push(p->lchild);
			} 
		}
		
		void InOrder1(){
			stack<BiTNode*> s;
			BiTNode *p = this->root;
			while(p||!s.empty()){
				if(p) {
					s.push(p);
					p = p->lchild;
				}
				else{
					p = s.top();
					s.pop();
					__visit(p->data);
					p = p->rchild;
				}
			}
		}
};



#endif
