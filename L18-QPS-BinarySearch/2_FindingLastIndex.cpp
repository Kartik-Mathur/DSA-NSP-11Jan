#include <iostream>
using namespace std;

int main() {

	// int a[] = {1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 5};

	int a[] = {1, 3, 4, 4, 4, 4, 5, 8, 9};

	int n = sizeof(a) / sizeof(int);
	int key = 4;
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

	cout << ans << endl;
	return 0;
}
















