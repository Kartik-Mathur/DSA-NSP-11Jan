#include <iostream>
using namespace std;

void printDec(int n) {
	// base case
	if (n == 0) {
		return;
	}

	cout << n << " ";
	printDec(n - 1);
}

void printInc(int n) {
	// base case
	if (n == 0) {
		return;
	}

	printInc(n - 1);
	cout << n << " ";
}

int main() {

	printInc(10);

	return 0;
}
















