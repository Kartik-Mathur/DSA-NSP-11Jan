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

node* createBST(int *a,int s,int e){
	if(s > e){
		return NULL;
	}

	int mid = (s+e)/2;
	node* root = new node(a[mid]);
	root->left = createBST(a,s,mid-1);
	root->right = createBST(a,mid+1,e);

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


int main(){

	int a[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(a)/sizeof(int);

	node* root= createBST(a,0,n-1);

	preOrder(root);
	cout<<endl;
	inOrder(root);
	cout<<endl;
	postOrder(root);
	cout<<endl;
	
	
	
	return 0;
}
















