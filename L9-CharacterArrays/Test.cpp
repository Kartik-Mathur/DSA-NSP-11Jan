#include <iostream>
using namespace std;

int main() {

	char a[] = "Hello";

	cout << (int*)a << endl;
	cout << a << endl;

	for (int i = 0 ; a[i] != '\0' ; i++) {
		cout << a[i] << "_";
	}

	return 0;
}
















