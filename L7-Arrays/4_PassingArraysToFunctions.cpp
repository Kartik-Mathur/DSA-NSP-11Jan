#include <iostream>
using namespace std;

// int sumOfArray(int a[], int n) {
int sumOfArray(int a[5], int n) {
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
	}

	return sum;
}

int main() {

	int a[5] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	int ans = sumOfArray(a, n);
	cout << ans << endl;

	return 0;
}
















