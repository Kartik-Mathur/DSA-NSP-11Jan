/*
Arrays are always passed as reference its not possible to pass them by value.
*/
#include <iostream>
using namespace std;

void updateArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		a[i]++;
	}
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	updateArray(a, n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















