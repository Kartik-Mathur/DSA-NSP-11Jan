#include <iostream>
using namespace std;

int kadanes(int *a, int n) {
	int sum = 0;
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
		if (sum < 0) {
			sum = 0;
		}

		ans = max(ans, sum);
	}
	return ans;
}

int main() {

	int a[] = { -1, -2, -3, -4, -5};
	int n = sizeof(a) / sizeof(int);
	int ans = 0;

	int mx = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		mx = max(mx, a[i]);
	}


	if (mx < 0) {
		cout << mx << endl;
	}
	else {
		cout << kadanes(a, n) << endl;
	}


	return 0;
}
















