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

int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
int k= 0;
node* buildTree(int *in,int s,int e){
	if(s>e) return NULL;
	node* root = new node(pre[k++]);

	int j;
	for (int i = s; i <= e; ++i)
	{
		if(in[i] == root->data){
			j = i;
			break;
		}
	}

	root->left = buildTree(in, s,j-1);
	root->right = buildTree(in,j+1,e);
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

	int in[] = {1, 10, 4, 6, 7, 8, 3, 13, 14};
	int n = sizeof(in)/sizeof(int);
	node* root = buildTree(in, 0, n-1);

	preOrder(root);
	cout<<endl;
	inOrder(root);
	cout<<endl;
	postOrder(root);
	cout<<endl;

	
	levelOrderTraversal(root);


	return 0;
}
















