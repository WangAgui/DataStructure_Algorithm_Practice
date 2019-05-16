#ifndef AVL_H_
#define AVL_H_
//
// AVL平衡二叉树  create by Wang Agui 
//


class AVL{
	private:
		struct Node{
			int key;
			Node *left,*right;
			int height;//that's difference
			Node(int key){
				this->key = key;
				this->left = NULL;
				this->right = NULL;
				this->height =1; 
			}
		};
		
		Node *root;
	public:
		
		AVL(){
			this->root = NULL;
		}
		
		void insert(int key){
			this->root = __insert(root,key);
		}
		
	private:
		int max(int a,int b){
			return (a>b)?a:b;
		}
		
		
		int getBalance(Node *N){
			if(N == NULL){
				return 0;
			}
			return N->left->height - N->right->height;
		}
		Node * __insert(Node *node,int key){
			//先进行常规的BST插入操作 
			if(node == NULL){
				node = new Node(key);
				return node;
			}
			
			if(key > node->key){
				node->right = __insert(node->right,key);
			}
			else if(key <node->key){
				node->left = __insert(node->left,key);
			}
			else{
				return node;
			}
			//进行调整
			
			
			
		}
};




#endif 
