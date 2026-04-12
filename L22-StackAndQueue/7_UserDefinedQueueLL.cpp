#include <iostream>
using namespace std;


class node{
public:
	int data;
	node* next;
	node(int d){
		data = d;
		next = NULL;
	}
};

class Queue{
	node* head,*tail;
	int cs;
public:
	
	Queue(){
		head = tail = NULL;
		cs = 0;
	}

	void push(int d){
		if(head == NULL){
			head = tail = new node(d);
			cs++;
		}
		else{
			node* n = new node(d);
			tail->next = n;
			tail=n;
			cs++;
		}
	}

	void pop(){
		if(head == NULL){
			return;
		}
		else if(head->next == NULL){
			delete head;
			head = tail = NULL;
			cs--;
		}
		else{
			node* t = head;
			head= head->next;
			delete t;
			cs--;
		}
	}

	int front(){
		return head->data;
	}

	bool empty(){
		return cs == 0;
	}

	int size(){
		return cs;
	}
};

int main(){

	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	while(!q.empty()){
		cout << q.front() << " ";

		q.pop();
	}
	cout << endl;
	return 0;
}
















