#include <iostream>
#include <climits>
using namespace std;

int main() {

	int a[] = {1, -2, 3, 4};
	int n = sizeof(a) / sizeof(int);
	int ans = INT_MIN;
	int si, sj;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int sum = 0;

			for (int k = i; k <= j; ++k)
			{
				// cout << a[k] << " ";
				sum += a[k];
			}
			// cout << ", SUM : " << sum  << endl;
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
















