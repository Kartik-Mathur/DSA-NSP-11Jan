#include <iostream>
#include <queue>
using namespace std;

class Stack{
	void reverseQueue(){
		if(q.empty()){
			return;
		}

		int x = q.front();
		q.pop();

		reverseQueue();

		q.push(x);
	}
	queue<int> q;
public:

	void push(int d){
		q.push(d);
	}

	void pop(){
		reverseQueue();
		q.pop();
		reverseQueue();
	}

	int top(){
		reverseQueue();
		int x = q.front();
		reverseQueue();
		return x;
	}

	bool empty(){
		return q.empty();
	}

};

int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while(!s.empty()){
		cout << s.top() << " ";

		s.pop();
	}
	cout << endl;


	return 0;
}
















