#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << (&a[4] - &a[0]) << endl; // Subtraction of two address will give number of buckets
	// between them

	return 0;
}
















