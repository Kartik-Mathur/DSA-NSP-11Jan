#include <iostream>
#include <queue>
using namespace std;

void reverseQueue(queue<int> &q){
	if(q.empty()){
		return;
	}

	int x = q.front();
	q.pop();

	reverseQueue(q);

	q.push(x);
}

int main(){
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	reverseQueue(q);

	while(!q.empty()){
		cout << q.front() << " ";

		q.pop();
	}
	cout << endl;


	return 0;
}
















