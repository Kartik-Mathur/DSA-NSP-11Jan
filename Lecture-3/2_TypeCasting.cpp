#include <iostream>
using namespace std;

int main() {

	cout << 'A' + 'A' << endl; // Operator implicit typecasting
	cout << 'A' + 'B' << endl; // Operator implicit typecasting

	char ch = 'A' + 1;
	cout << ch << endl; // B, As character bucket will not print the ascii value but
	// character

	int x = 'A';
	cout << x << endl; // 65

	// Explicit
	cout << 'A' << endl;
	cout << (int)'A' << endl;
	cout << (char)65 << endl;

	return 0;
}
















