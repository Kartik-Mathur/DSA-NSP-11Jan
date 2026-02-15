#include <iostream>
using namespace std;

int main() {

	int *a;
	int x;
	int *b; // It has garbage address in it

	cout << a << endl;
	cout << b << endl;
	cout << *b << endl; // derefering a garbage address will give garbage value only..

	int *c = NULL; // always initialize your pointer with NULL (0x0)-> Zero address
	cout << *c << endl; // NULL address ko access karna is not allowed

	int y = 10;

	c = &y;
	cout << *c << endl; // Now it works fine

	return 0;
}
















