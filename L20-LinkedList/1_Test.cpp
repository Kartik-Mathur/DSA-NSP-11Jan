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

void insertAtFront(node* &head, node* &tail, int data) {
	node* n = new node(data);

	if (head == NULL) {
		head = tail = n;
	}
	else {
		n->next = head;
		head = n;
	}
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


void insertAtMid(node* &head, node* &tail, int data, int pos) {
	if (pos == 0) {
		insertAtFront(head, tail, data);
	}
	else if (pos > lengthLL(head)) {
		insertAtEnd(head, tail, data);
	}
	else {
		node * t = head;
		for (int i = 1; i <= pos - 1; ++i)
		{
			t = t->next;
		}

		node* n = new node(data);
		n->next = t->next;
		t->next = n;
	}
}


void deleteAtFront(node* &head, node* &tail) {
	if (head == NULL) {
		return ;
	}
	else if (head -> next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

void deleteAtEnd(node* &head, node* &tail) {
	if (head == NULL) {
		return ;
	}
	else if (head -> next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		while (temp->next != tail) {
			temp = temp -> next;
		}

		delete tail;
		temp->next = NULL;
		tail = temp;
	}
}

void deleteAtMid(node*&head, node* &tail, int pos) {
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos >= lengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else {
		node * temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp->next;
		}

		node* n = temp->next;
		temp->next = n->next;
		delete n;
	}
}

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

void reverseLLRecursive(node* &head, node* &tail, node* c, node* p = NULL) {
	if (c == NULL) {
		swap(head, tail);
		return;
	}

	node* n = c->next;
	c->next = p;
	reverseLLRecursive(head, tail, n, c);
}

void print(node* head) {
	while (head != NULL) {
		cout << head->data << " --> ";
		head = head->next;
	}
	cout << "NULL\n";
}


int main() {

	node* head = NULL, *tail = NULL;

	insertAtFront(head, tail, 1);
	insertAtFront(head, tail, 2);
	insertAtFront(head, tail, 3);
	insertAtFront(head, tail, 4);
	insertAtFront(head, tail, 5);
	insertAtFront(head, tail, 6);

	print(head);
	// reverseLL(head, tail);
	reverseLLRecursive(head, tail, head);
	print(head);

	// insertAtMid(head, tail, 121, 5);
	// print(head);
	// deleteAtFront(head, tail);
	// print(head);
	// deleteAtEnd(head, tail);
	// print(head);
	// deleteAtMid(head, tail, 3);
	// print(head);

	return 0;
}
















