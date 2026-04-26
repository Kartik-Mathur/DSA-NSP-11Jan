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


class LinkedList{
public:
	node* head,*tail;
};

LinkedList bstToLL(node* root){
	if(root == NULL){
		LinkedList l;
		l.head = l.tail = NULL;
		return l;
	}

	if(root -> left != NULL and root->right != NULL){
		// LST and RST dono hai, toh dono Subtree ko LL mei convert krwaao

		LinkedList left = bstToLL(root->left); // LST ko LL mei convert kra
		LinkedList right = bstToLL(root->right); // RST ko LL mei convert kra

		left.tail -> right = root; // root ko correct jagah connect kr diya
		root->right = right.head;

		LinkedList l;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
	else if(root -> left != NULL and root->right == NULL){

		LinkedList left = bstToLL(root->left); // LST ko LL mei convert kra

		left.tail -> right = root;
		LinkedList l;
		l.head = left.head;
		l.tail = root;
		return l;
	}
	else if(root -> left == NULL and root->right != NULL){
		LinkedList right = bstToLL(root->right); // RST ko LL mei convert kra
		root->right = right.head;
		LinkedList l;
		l.head = root;
		l.tail = right.tail;
		return l;
	}
	else{
		LinkedList l;
		l.head = root;
		l.tail = root;
		return l;
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
	LinkedList l = bstToLL(root);

	node* head = l.head;
	while(head != NULL){
		cout << head->data << " --> ";
		head = head -> right;
	}
	cout << "NULL\n";
	
	
	return 0;
}
















