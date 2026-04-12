#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data  = d;
		next = NULL;
	}
};

void insertAtEnd(node* &head, node* &tail, int data) {
	node* n = new node(data);

	if (head == NULL) {
		head = tail = n;
	}
	else {
		tail->next = n;
		tail = n;
	}
}

int lengthLL(node* head) {
	int cnt = 0;
	while (head != NULL) {
		cnt ++;
		head = head->next;
	}
	return cnt;
}


void print(node* head) {
	while (head != NULL) {
		cout << head->data << " --> ";
		head = head->next;
	}
	cout << "NULL\n";
}

node* search(node* head,int key){
	if(head == NULL){
		return NULL;
	}

	if(head->data == key){
		return head;
	}
	return search(head->next,key);
}


int main() {

	node* head = NULL, *tail = NULL;
	int n;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		int data;
		cin>>data;
		insertAtEnd(head,tail,data);
	}

	print(head);
	int key;
	cout<<"Enter key to search: ";
	cin>>key;

	node* ans=search(head,key);
	if(ans != NULL){
		cout << ans->data <<"\n";
	}
	else{
		cout << "Key not found\n";
	}

	return 0;
}
















