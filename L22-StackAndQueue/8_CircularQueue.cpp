#include <iostream>
using namespace std;

class Queue{
	int *arr;
	int f,e,cs,n;
public:
	
	Queue(int s=5){
		n = s;
		arr = new int[s];
		f = 0;
		e = n-1;
		cs = 0;
	}

	void push(int d){
		if(cs >= n){
			cout << "Overflow\n";
		}
		else{
			e = (e+1)%n;
			arr[e] = d;
			cs++;
		}
	}

	void pop(){
		if(cs > 0){
			f = (f+1)%n;
			cs--;
		}
		else{
			cout << "Underflow\n";
		}
	}

	int front(){
		return arr[f];
	}

	bool empty(){
		return cs == 0;
	}

	int size(){
		return cs;
	}
};

int main(){
	Queue q(6);
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	while(!q.empty()){
		cout << q.front() << " ";

		q.pop();
	}
	cout << endl;

	return 0;
}
















