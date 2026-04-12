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

node* mid(node* head){
	node*s = head;
	node* f = head->next;

	while(f!=NULL and f->next != NULL){
		f = f->next->next;
		s = s->next;
	}

	return s;
}


node* mergeSortedLL(node* a,node* b){
	if(a == NULL){
		return b;
	}
	if(b == NULL){
		return a;
	}

	node* nH;
	if(a->data < b->data){
		nH = a;
		nH->next = mergeSortedLL(a->next,b);
	}
	else{
		nH = b;
		nH->next = mergeSortedLL(a,b->next);
	}

	return nH;
}


int main() {

	node* head = NULL, *tail = NULL;
	node* head1 = NULL, *tail1 = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 8);
	insertAtEnd(head, tail, 9);

	insertAtEnd(head1, tail1, 2);
	insertAtEnd(head1, tail1, 4);
	insertAtEnd(head1, tail1, 6);
	insertAtEnd(head1, tail1, 7);
	

	print(head);
	print(head1);

	node* nH = mergeSortedLL(head,head1);
	print(nH);
	// node* x = mid(head);
	// cout << x->data << endl; // (*x).data


	return 0;
}
















