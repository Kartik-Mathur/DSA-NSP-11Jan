#include <iostream>
#include <queue> // priority_queue
using namespace std;

class compare{
public:
	bool operator()(int a,int b){ // Functor
		return a<b;
	}
};

int main(){

	// priority_queue<int> h; // Max heap
	priority_queue<int, vector<int>, compare> h; 


	h.push(2);
	h.push(1);
	h.push(3);
	h.push(5);
	h.push(4);
	
	while(!h.empty()){
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;

	return 0;
}
















