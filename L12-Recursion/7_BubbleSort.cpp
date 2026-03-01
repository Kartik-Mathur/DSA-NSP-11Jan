#include <iostream>
using namespace std;

void bubbleSort(int *a, int n, int i) {
	// base case
	if (i == n - 1) {
		// Jab i -> n-1 ho jaega means n-1 elements sahi jagah place ho gaye that means
		// no need to sort further
		return;
	}

	// recursive case
	// 1. Ek element ko sahi jagah hum rakh denge
	for (int j = 0; j < n - 1 - i; ++j)
	{
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
	}

	// Baaki ke elements ko sahi jagah mei recursion se bol dunga
	bubbleSort(a, n, i + 1);
}

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	// Bubble Sort
	bubbleSort(a, n, 0);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















