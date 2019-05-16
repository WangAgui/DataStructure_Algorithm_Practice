#ifndef BINARY_SERARCH_TREE_
#define BINARY_SERARCH_TREE_
#include <cassert>
#include <queue>
//
//����������(������)��ͨ������ʵ�ֲ��ұ� ->>�ֵ����ݽṹ  craete by Wang Agui
//���ƣ���Ч���ң����룬ά��
//min��max��floor��ceil��rank��select
// 

#include<stack>
#include<iostream>
using namespace std;
template<typename Key,typename Value>
class BST{
	private:
		struct Node{
			Key key;
			Value value;
			Node *left;
			Node *right;
			
			Node(Key key,Value value){
				this->key =key;
				this->value = value;
				this->left = this->right = NULL; 
			}
			
			Node(Node *node){
				this->key = node->key;
				this->value = node->value; 
				this->left = node->left;
				this->right = node->right;
			}
		};
	
		Node *root;
		int count;//�����������Ľڵ���
	public:	
		BST(){
			root = NULL;
			count = 0;
		}
		~BST(){
			__destroy(root);
		}
		
		int size(){
			return count;
		}
		
		int empty(){
			return count ==0;
		}
		
		//�����½ڵ� �������key�Ѿ����ڣ����µ�key�ļ�ֵ���Ǿɵ�
		
		void insert(Key key,Value value){
			
			root = __insert(root,key,value);
		}
		//���Էǵݹ�д�� 
		void insert1(Key key,Value value){
			if(root == NULL){
				root = new Node(key,value);
				return ;
			}
			
			Node *p = root;
			while(true){

				if(p == NULL){
					p = new Node(key,value);
					cout<<"ldjsflk"; 
					count ++;
					break;
				}
				
				if(p->key == key){
					p->value = value;
					cout<<"**"<<endl; 
					break;
				}
				else if(key < p->key){
					p = p->left; 
				}
				else p = p->right;
				
			}
		} 

		bool contain(Key key){
			return __contain(root,key);
		}
		
		Value* search(Key key){
			return __search(root,key);
		}
		//ǰ����� 
		
		void preOrder(){
			__preOrder(root);
		}
		
		void removeMin(){
			if(root){
				root = removeMin(root);
			}
		}
		//����������ɾ���ڵ�-->>>>��Ӳ��� �㷨��hubburd deletion�㷨
		//ɾ�����Һ��Ӷ��еĽڵ�s  �ҵ�s=min(d->right) 
		
		void remove(Key key){
			//ɾ����ֵΪkey�Ľڵ�
			__remove(root,key); 
		}
		
		
		 
	private:  //���ʾ��� 
		Node *__insert(Node *node,Key key,Value value){
			if(node == NULL){
				count ++;
				return new Node(key,value);
			}
			
			
			if(key == node->key){
				node->value = value;
			}
			else if(key< node->key){
				node->left = __insert(node->left,key,value);
			}
			else 
				node->right= __insert(node->right,key,value);
		}
		
		bool __contain(Node*node,Key key){
			if(node == NULL) return false;
			
			if(key == node->key)return true;
			if(key < node->key) return __contain(node->left,key);
			else return __contain(node->right,key);
		}	

		Value* __search(Node *node,Key key){
			if(node == NULL)return NULL;
			
			if(key == node->key) return &(node->value);
			
			if(key < node->key) return __search(node->left,key);
			
			else return __search(node->right,key);
		}
		
		void __preOrder(Node * node){
			if(node != NULL){
				cout<<node->key<<" ";
				__preOrder(node->left);
				__preOrder(node->right);
			}
		}
		//ͨ����������ķ�ʽ�������������������������������������� 
		void __destroy(Node *node){
			if(node !=NULL){
				__destroy(node->left);
				__destroy(node->right);
				delete node;
				count --;
			}
		}
		
		Node *removeMin(Node *node){
			if(node->left == NULL){
				Node *rightNode = node->right;
				delete node;
				count --;
				return rightNode;
			}
			
			node->left = removeMin(node->left);
			return node;
		}
		
		Node *minimum(Node *node){
			if(node->left == NULL){
				return node;
			}
		}
		
		Node *__remove(Node *node,Key key){
			if(node ==NULL) return NULL;
			
			if(node->key <key){
				node->right = __remove(node->right,key);
				return node;
			}
			else if(node->key >key){
				node->left = __remove(node->left,key);
				return node;
			}
			else
			{
				if(node->left == NULL){
					Node *rightNode = node->right;
					delete node;
					count --;
					return rightNode;
				}
				if(node->right == NULL){
					Node *leftNode = node->left;
					delete node;
					count--;
					return leftNode;
				}
				
				Node *rightMin =new Node(minimum(node->right));
				count ++;
				rightMin->right = removeMin(node->right);
				rightMin->left = node->left;
				delete node;
				count --;
				return rightMin;
			}
		}
};


#endif
