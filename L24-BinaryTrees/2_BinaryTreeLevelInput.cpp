#include <iostream>
#include <queue>
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

node* buildTreeLevelWise(){
	node* root = NULL;
	cout << "Enter data for root : ";
	int data;
	cin>>data;
	
	if(data == -1) return root;
	root = new node(data);

	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node* x = q.front();
		q.pop();

		cout << "Enter left and right child of "<<x->data <<" : ";
		int l,r;
		cin>>l>>r;
		if(l != -1){
			x->left = new node(l);
			q.push(x->left);
		}
		if(r != -1){
			x->right = new node(r);
			q.push(x->right);
		}
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


	node* root = buildTreeLevelWise();

	preOrder(root);
	cout<<endl;
	inOrder(root);
	cout<<endl;
	postOrder(root);
	cout<<endl;

	
	levelOrderTraversal(root);


	return 0;
}
















