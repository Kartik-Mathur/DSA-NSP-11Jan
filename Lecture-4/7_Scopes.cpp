#include <iostream>
using namespace std;

int a = -10000;

int main() {

	int a = 1;
	int b = 11111;

	if (a > 0) {

		int b = 10;
		cout << a << ", " << b << endl;
		::a = ::a - 100;
		cout << "Global Scope: " <<::a << endl; // :: -> Scope Resolution Operator
	}

	cout << a << ", " << b << endl;

	return 0;
}
















