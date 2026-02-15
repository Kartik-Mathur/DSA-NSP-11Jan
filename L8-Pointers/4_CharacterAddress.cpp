#include <iostream>
using namespace std;

int main() {

	char ch = 'A';
	int a;
	int b;
	char ch1 = 'B';
	char ch2 = 'C';

	cout << &ch << endl;
	cout << &ch1 << endl;
	cout << &ch2 << endl;

	// In order to print actual address of character bucket we have to fool the compiler
	cout << (int*)&ch2 << endl;
	cout << (float*)&ch2 << endl;
	cout << (void*)&ch2 << endl;

	return 0;
}
















