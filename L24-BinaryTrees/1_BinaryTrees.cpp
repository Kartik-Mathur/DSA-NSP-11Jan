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

class Pair{
public:
	int height;
	int diameter;
};

Pair fastDiameter(node* root){
	// base case
	if(root == NULL){
		Pair p;
		p.height = p.diameter = 0;

		return p;
	}

	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	Pair p;
	p.height = max(left.height,right.height) + 1;

	int op1 = left.diameter;
	int op2 = right.diameter;
	int op3 = left.height + right.height;

	p.diameter = max(op1, max(op2,op3));
	return p;
}

node* search(node* root,int key){
	if(root == NULL){
		return NULL;
	}

	if(root->data == key){
		return root;
	}
	node* left = search(root->left,key);
	if(left != NULL){
		return left;
	}

	return search(root->right,key);
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

void mirror(node* root){
	if(root == NULL){
		return;
	}

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
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

	Pair ans = fastDiameter(root);
	cout << "Fast Height : "<<ans.height<<endl;
	cout << "Fast Dia.   : "<<ans.diameter<<endl;

	node* x = search(root, 17);
	if(x == NULL){
		cout << "Key not found\n";
	}
	else{
		cout << "Found : "<<x->data << endl;
	}
	levelOrderTraversal(root);
	mirror(root);
	levelOrderTraversal(root);

	return 0;
}
















