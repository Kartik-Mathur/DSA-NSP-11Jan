#include <iostream>
using namespace std;

// void printArray(int a[], int n) {
void printArray(int *a, int n) {
	cout << "sizeof(a) in function : " << sizeof(a) << endl;

	for (int i = 0; i < n; ++i)
	{
		// cout << a[i] << " "; // a[i] == *(a+i)
		cout << *(a + i) << " "; // a[i] == *(a+i)
	}
	cout << endl;

}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	cout << "sizeof(a) : " << sizeof(a) << endl;
	int n = sizeof(a) / sizeof(int);
	/*
		I can do this
		int* x = a;
	*/
	printArray(a, n);

	return 0;
}
















