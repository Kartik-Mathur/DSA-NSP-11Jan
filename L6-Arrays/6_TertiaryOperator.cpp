#include <iostream>
using namespace std;

int main() {

	int a = 1;

	// (condition) ?  :  ;

	(a >= 1) ? cout << "Hello\n" : cout << "World\n";

	bool x = (a % 2 == 0 ? true : false);

	if (x) {
		cout << "Even hai\n";
	}
	else {
		cout << "Odd hai\n";
	}

	return 0;
}
















