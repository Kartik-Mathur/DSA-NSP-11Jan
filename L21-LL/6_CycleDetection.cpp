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

void breakCycle(node* head,node* f){
	node* s= head;
	node* fp;
	while(f!=s){
		fp = f;
		f = f->next;
		s = s->next;
	}

	fp->next = NULL;
}

bool floydCycleDetection(node* head){
	node* s=head,*f = head;

	while(f != NULL and f->next != NULL){
		f = f->next->next;
		s = s->next;

		if(s == f){
			breakCycle(head,f);
			return true;
		}
	}

	return false;
}

int main() {

	node* head = NULL, *tail = NULL;
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 8);
	insertAtEnd(head, tail, 18);
	insertAtEnd(head, tail, 81);
	insertAtEnd(head, tail, 118);
	insertAtEnd(head, tail, 8111);

	// Let's create the cycle
	tail->next = head->next->next->next->next->next->next;

	if(floydCycleDetection(head) == true){
		cout << "Cycle hai\n";
	}
	else{
		cout << "Cycle nahi hai\n";
		print(head);
	}

	print(head);
	

	return 0;
}
















