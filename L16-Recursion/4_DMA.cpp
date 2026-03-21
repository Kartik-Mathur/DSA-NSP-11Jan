#include <iostream>
using namespace std;

int main() {

	int *a = new int;

	*a = 10;
	cout << *a << endl;

	// Free the space
	delete a; // Yeh jisse a point kr rha hai heap mei usse free kar dega
	a = NULL;

	return 0;
}
















