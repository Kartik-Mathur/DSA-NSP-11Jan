#include <iostream>
using namespace std;

class node{
public:
	node* left, *right;
	int no;
	node(){
		left = right = NULL;
	}
};

class Trie{

public:
	node* root;
	Trie(){
		root = new node();
	}

	void addNumber(int no){
		node* temp = root;
		for (int i = 30; i >= 0; --i)
		{
			int bit = no&(1<<i);
			if(bit > 0){
				if(temp->right == NULL){
					temp -> right = new node();
				}
				temp = temp->right;
			}
			else{
				if(temp->left == NULL){
					temp -> left = new node();
				}
				temp = temp->left;
			}
		}

		temp -> no = no;
	}

	int find(int no){
		node* temp = root;
		for (int i = 30; i >= 0; --i)
		{
			int bit = no&(1<<i);
			if(bit > 0){
				if(temp->left){
					temp = temp -> left;
				}
				else temp = temp->right;
			}
			else{
				if(temp->right){
					temp = temp -> right;
				}
				else temp = temp->left;
			}
		}

		return temp->no;
	}


	int findMaxXOr(int *arr,int n){
		int ans = 0;
		int no1, no2;
		for (int i = 0; i < n; ++i)
		{
			addNumber(arr[i]);
			int x = find(arr[i]);

			if( (arr[i]^x) > ans){
				no1 = arr[i];
				no2 = x;
				ans = arr[i]^x;
			}
		}
		
		(no1>no2)?
			cout << "Max Xor Pair: "<<no2<<", "<<no1<<endl
			: 
			cout << "Max Xor Pair: "<<no1<<", "<<no2<<endl;

		return ans;
	}
};


int main(){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);

	Trie t;
	cout << t.findMaxXOr(a,n) << endl;

	return 0;
}
















