#include <iostream>
using namespace std;

int main() {
	char c;
	int n, r, i;

	cin >> n;

	for (r = 1; r <= n; ++r)
	{
		c = 'A';
		// 1. Increasing Characters
		for (i = 1 ; i <= n - r + 1 ; i++) {
			cout << c << " ";
			c++;
		}

		// 2. Decreasing
		c = c - 1;
		for (i = 1 ; i <= n - r + 1 ; i++) {
			cout << c << " ";
			c--;
		}

		cout << endl;
	}

	return 0;
}
















