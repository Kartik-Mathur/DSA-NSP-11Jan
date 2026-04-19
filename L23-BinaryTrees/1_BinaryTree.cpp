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

node* createTree(){
	int data;
	cin>>data;
	if(data == -1){
		return NULL;
	}

	node* root = new node(data);
	root->left = createTree();
	root->right = createTree();	

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

int countNodes(node* root){
	if(root == NULL){
		return 0;
	}

	return 1 + countNodes(root->left) + countNodes(root->right);
}

int height(node* root){
	if(root == NULL){
		return 0;
	}

	int lst_height = height(root -> left);
	int rst_height = height(root -> right);

	return max(lst_height, rst_height) + 1;
}

int diameter(node* root){
	if(root == NULL){
		return 0;
	}

	int op1 = height(root->left) + height(root->right);
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);

	return max(op1, max(op2,op3));
}

int main(){

	node* root = createTree();

	preOrder(root);
	cout<<endl;
	inOrder(root);
	cout<<endl;
	postOrder(root);
	cout<<endl;

	cout << "Count Nodes : "<<countNodes(root) << endl;
	cout << "Tree Height : "<<height(root) << endl;
	cout << "Diameter    : "<<diameter(root)<<endl;

	return 0;
}
















