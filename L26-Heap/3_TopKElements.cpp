#include <iostream>
#include <queue> // priority_queue
using namespace std;

class compare{
public:
	bool operator()(int a,int b){ // Functor
		return a>b;
	}
};

void printHeap(priority_queue<int, vector<int>, compare> h){
	while(!h.empty()){
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;
}

int main(){

	// priority_queue<int> h; // Max heap
	priority_queue<int, vector<int>, compare> h; 
	int k =3;
	while(1){
		int no;
		cin>>no;
		if(no == -1){
			// print heap
			printHeap(h); 
		}
		else{
			if(h.size() < k){
				h.push(no);
			}
			else{
				if(h.top() < no){
					h.pop();
					h.push(no);
				}
			}
		}
	}


	

	return 0;
}
















