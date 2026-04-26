#include <iostream>
using namespace std;


class node{
public:
	int data;
	node* left, *right;

	node(int d){
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root,int d){
	if(root == NULL){
		root = new node(d);
		return root;
	}

	if(d <= root->data){
		root -> left = insertInBST(root	-> left, d);
	}
	else{
		root->right = insertInBST(root->right, d);
	}

	return root;
}

node* createBST(){
	int data;
	cin>>data;
	if(data == -1) {
		return NULL;
	}

	node* root = NULL;
	while(data != -1){

		root = insertInBST(root, data);

		cin>>data;
	}

	return root;
}



void preOrder(node* root){
	if(root == NULL){
		return;
	}

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node* root){
	if(root == NULL){
		return;
	}

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(node* root){
	if(root == NULL){
		return;
	}
	
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

void levelOrderTraversal(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* x = q.front();
		q.pop();

		if(x != NULL){
			cout << x -> data << " ";
			if(x->left){
				q.push(x->left);
			}

			if(x->right){
				q.push(x->right);
			}
		}
		else{
			cout << endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
	}
}
int main(){

	node* root= createBST();

	preOrder(root);
	cout<<endl;
	inOrder(root);
	cout<<endl;
	postOrder(root);
	cout<<endl;

	
	levelOrderTraversal(root);
	return 0;
}
















