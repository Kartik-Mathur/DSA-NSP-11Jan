#include <iostream>
using namespace std;

void pushBottom(stack<int> &s,int top){
	if(s.empty()){
		s.push(top);
		return;
	}

	int x = s.top();
	s.pop();
	pushBottom(s,top);
	s.push(x);
}

void reverseStack(stack<int> &s){
	if(s.empty()){
		return;
	}

	// Top element ek hatao
	int top = s.top();
	s.pop();

	// Chota stack recursion se reverse krwaao
	reverseStack(s);

	// push bottom top element
	pushBottom(s,top);
}


int main(){

	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	reverseStack(s);

	while(!s.empty()){
		cout << s.top() << " ";

		s.pop();
	}
	cout << endl;


	return 0;
}
















