#include <iostream>
using namespace std;

void update(int *x) {

	*x = *x + 1;
}

int main() {

	int a = 1;

	cout << "Before update a : " << a << endl;
	update(&a);
	cout << "After  update a : " << a << endl;


	return 0;
}
















