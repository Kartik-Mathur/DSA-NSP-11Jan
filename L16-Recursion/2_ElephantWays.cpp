#include <iostream>
using namespace std;

int elephantWays(int n, int m) {
	if (n == 0 and m == 0) {
		return 1;
	}

	int ans = 0;
	for (int k = 0; k < n; ++k)
	{
		ans += elephantWays(k, m);
	}

	for (int k = 0; k < m; ++k)
	{
		ans += elephantWays(n, k);
	}
	return ans;
}

int main() {

	cout << elephantWays(3, 3) << endl;

	return 0;
}

















