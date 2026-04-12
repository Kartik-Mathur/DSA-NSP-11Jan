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

void reverseLL(node* &head, node* &tail) {
	node* p = NULL, * c = head, *n;

	while (c != NULL) {
		n = c -> next;
		c->next = p;
		p = c;
		c = n;
	}
	swap(head, tail);
}


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

node* reverseKGroup(node* head,int k){
	node* dH = new node(-1);
	dH->next = head;
	node* p=dH;

	int remainingLen = lengthLL(head);
	while(remainingLen > k-1){
		node* tail = head;
		for (int i = 0; i < k-1; ++i)
		{
			tail = tail->next;
		}

		node* n = tail->next;
		tail->next = NULL;

		// 2. Reverse LL
		reverseLL(head,tail);

		// 3. Connect ReversedLL to original List
		p->next = head;
		tail->next=n;

		// 4. Update pointers
		p = tail;
		head = n;

		remainingLen -= k;
	}

	return dH->next;
}

int main() {

	node* head = NULL, *tail = NULL;
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	// insertAtEnd(head, tail, 4);
	// insertAtEnd(head, tail, 5);
	// insertAtEnd(head, tail, 6);
	// insertAtEnd(head, tail, 7);
	// insertAtEnd(head, tail, 8);
	// insertAtEnd(head, tail, 9);
	// insertAtEnd(head, tail, 10);

	head = reverseKGroup(head,3);
	print(head);

	
	return 0;
}
















