#include <iostream>
using namespace std;

int main() {

	char ch;

	cin >> ch;

	if (ch >= 'A' and ch <= 'Z') {
		cout << "Upper case\n";
	}
	else if (ch >= 'a' and ch <= 'z') {
		cout << "Lower case\n";
	}
	else {
		cout << "Not an alphabet\n";
	}

	return 0;
}
















