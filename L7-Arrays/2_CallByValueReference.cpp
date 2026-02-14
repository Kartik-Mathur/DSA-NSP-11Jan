#include <iostream>
using namespace std;


void update(int &x) {

	x = x + 1;

}

int main() {

	int a = 1;
	cout << "Before Update : " << a << endl;

	update(a);

	cout << "After Update  : " << a << endl;

	return 0;
}
















