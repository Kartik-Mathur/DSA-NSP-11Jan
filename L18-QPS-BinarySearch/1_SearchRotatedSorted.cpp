#include <iostream>
using namespace std;

int search(int *a, int n, int key) {
	int s = 0, e = n - 1;
	while (s <= e) {
		int m = (s + e) / 2;
		if (a[m] == key) {
			return m;
		}
		else if (a[m] <= a[n - 1]) { // I am on part - 2
			if (key >= a[m] and key <= a[e]) {
				s = m + 1;
			}
			else {
				e = m - 1;
			}
		}
		else { // I am on part - 1
			if (key >= a[s] and key <= a[m]) {
				e = m - 1;
			}
			else {
				s = m + 1;
			}
		}
	}

	return -1;
}

int searchRecursive(int *a, int s, int e, int key, int n) {
	if (s > e) {
		return -1;
	}

	int m = (s + e) / 2;
	if (a[m] == key) {
		return m;
	}
	else if (a[m] <= a[n - 1]) {
		if (key >= a[m] and key <= a[e]) {
			return searchRecursive(a, m + 1, e, key, n);
		}
		else {
			return searchRecursive(a, s, m - 1, key, n);
		}
	}
	else {
		if (key >= a[s] and key <= a[m]) {
			return searchRecursive(a, s, m - 1, key, n);
		}
		else {
			return searchRecursive(a, m + 1, e, key, n);
		}

	}
}
int main() {

	int a[] = {10, 15, 16, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	int key;
	cin >> key;

	int ans = searchRecursive(a, 0, n - 1, key, n);
	cout << "Key Found at index " << ans << endl;




	return 0;
}
















