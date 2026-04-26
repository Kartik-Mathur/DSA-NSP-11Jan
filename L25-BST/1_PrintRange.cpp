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

void printRange(node* root,int k1,int k2){
	if(root == NULL){
		return;
	}


	if(k1 <= root->data){
		printRange(root->left, k1,k2);
	}

	if(root->data >=k1 and root->data <= k2){
		cout << root->data<< " ";
	}
	
	if(k2 >= root->data){
		printRange(root->right, k1,k2);
	}
}

node* search(node* root, int key){
	if(root == NULL){
		return NULL;
	}

	if(root->data == key){
		return root;
	}
	else if(key <= root -> data){
		return search(root->left, key);
	}
	else{
		return search(root->right, key);
	}
}

bool isBST(node* root,int mi = INT_MIN,int mx = INT_MAX){
	if(root == NULL){
		return true;
	}

	if(root->data >= mi and root->data <=mx and 
		isBST(root->left, mi, root->data) == true and 
		isBST(root->right, root->data, mx) == true){
		return true;
	}

	return false;
}

class Pair{
public:
	int height;
	bool balanced;
};
// 8 3 10 1 6 14 4 7 13 9 -1
Pair isBalanced(node* root){
	if(root == NULL){
		Pair p;
		p.height = 0;
		p.balanced = true;
		return p;
	}

	Pair left = isBalanced(root->left);
	Pair right = isBalanced(root->right);

	Pair p;
	p.height = max(left.height, right.height)+1;
	p.balanced = (abs(left.height - right.height) <= 1 and left.balanced and right.balanced);

	return p;
}

int main(){

	node* root= createBST();

	preOrder(root);
	cout<<endl;
	inOrder(root);
	cout<<endl;
	postOrder(root);
	cout<<endl;
	printRange(root, 5,10);
	cout<<endl;

	int key = 17;
	node* ans =search(root, key);
	if(ans != NULL) cout << "Found : "<<ans -> data << endl;
	else cout << "Not found\n";

	if(isBST(root)) cout << "BST hai\n";
	else cout << "BST nahi hai\n";

	Pair x = isBalanced(root);
	cout << "Height : "<<x.height<<endl;
	if(x.balanced  == true){
		cout << "balanced\n";
	}
	else{
		cout << "not balanced\n";
	}
	
	return 0;
}
















