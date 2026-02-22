#include <iostream>
#include <climits>
using namespace std;

void prefixSum(int *a, int n, int *ps) {
	ps[0] = a[0];
	for (int i = 1; i < n; ++i)
	{
		ps[i] = ps[i - 1] + a[i];
	}
}

int main() {

	int a[] = {1, 2, 3, 4};
	int n = sizeof(a) / sizeof(int);
	int ans = INT_MIN;

	int ps[100];
	prefixSum(a, n, ps);

	int si, sj;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int sum = ps[j] - (i - 1 >= 0 ? ps[i - 1] : 0);

			if (sum > ans) {
				si = i;
				sj = j;
				ans = sum;
			}
		}
	}

	cout << "Maximum Subarray Sum: " << ans << endl;
	for (int i = si; i <= sj; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















