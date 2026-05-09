#include <iostream>
#include <vector>
using namespace std;

class Minheap{
	vector<int> v;

	void heapify(int i){
		int l = 2*i,r=l+1,mi = i;
		if(l < v.size() and v[mi] > v[l]) mi = l;
		if(r < v.size() and v[mi] > v[r]) mi = r;

		if(mi != i){
			swap(v[mi],v[i]);
			heapify(mi);
		}
	}
public:
	Minheap(){
		v.push_back(-1); // To block 0th index
	}

	void push(int d){
		v.push_back(d);
		int c = v.size()-1, p = c/2;
		while(p>0 and v[p]>v[c]){
			swap(v[p],v[c]);
			p = p/2;
			c /= 2;
		}
	}

	void pop(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);
	}

	int top(){
		return v[1];
	}

	bool empty(){
		return v.size() == 1; // kyunki 0th index par -1 daala tha manually in constructor
	}
};

int main(){

	Minheap h;

	h.push(2);
	h.push(1);
	h.push(3);
	h.push(5);
	h.push(4);
	// Heap sort
	while(!h.empty()){
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;

	return 0;
}
















