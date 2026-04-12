#include <iostream>
#include <vector>
using namespace std;

class Stack{
private:
	vector<int> v; // This will ensure that other than functions defined
	// user cannot access the data outside class 
public:

	void push(int d){
		v.push_back(d);
	}

	void pop(){
		v.pop_back();
	}

	int top(){
		return v[v.size() - 1];
	}

	bool empty(){
		return v.size() == 0;
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
















