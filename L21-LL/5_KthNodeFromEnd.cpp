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

node* kthFromEnd(node* head,int k){
	node* s = head, *f = head;
	for (int i = 0; i < k; ++i)
	{
		f = f->next;
	}

	while(f != NULL){
		f = f->next;
		s = s->next;
	}

	return s;
}

int main() {

	node* head = NULL, *tail = NULL;
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 6);
	print(head);
	
	node* ans = kthFromEnd(head,4);
	cout << ans -> data <<endl;

	return 0;
}
















