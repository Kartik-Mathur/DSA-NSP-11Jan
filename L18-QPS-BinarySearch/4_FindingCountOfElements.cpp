#include <iostream>
using namespace std;

int lastIndex(int *a, int n, int key) {
	int s = 0, e = n - 1;
	int ans;
	while (s <= e) {
		int m = (s + e) / 2;

		if (a[m] <= key) {
			// Yaha key can never be greater than a[m]
			ans = m;
			s = m + 1;
		}
		else {
			e = m - 1;
		}
	}

	return ans;
}

int firstIndex(int *a, int n, int key) {
	int s = 0, e = n - 1;
	int ans;
	while (s <= e) {
		int m = (s + e) / 2;

		if (a[m] >= key) {
			ans = m;
			e = m - 1;
		}
		else {
			s = m + 1;
		}
	}
	return ans;
}

int main() {

	int a[] = {1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 5};
	// int a[] = {1, 3, 4, 4, 4, 4, 5, 8, 9};
	int n = sizeof(a) / sizeof(int);

	int elements = lastIndex(a, n, 4) - firstIndex(a, n, 4) + 1;
	cout <<  "Count: " << elements << endl;

	return 0;
}
















