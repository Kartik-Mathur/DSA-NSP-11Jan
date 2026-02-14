#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
	for (int i = 0; i < n - 1; ++i)
	{
		int mi = i;

		for (int j = i + 1; j < n; ++j)
		{
			if (a[mi] > a[j]) {
				mi = j;
			}
		}

		swap(a[i], a[mi]);
	}
}

void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	int a[] = {5, 6, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	printArray(a, n);
	selectionSort(a, n);
	printArray(a, n);



	return 0;
}
















