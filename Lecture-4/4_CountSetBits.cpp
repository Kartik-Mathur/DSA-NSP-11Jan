#include <iostream>
using namespace std;

int main() {

	int n, r;
	int cnt = 0;

	// Way - 1 (Using Bitwise Operator)
	for (cin >> n; n > 0; n >>= 1) {
		if ((n & 1) == 1) {
			cnt++;
		}
	}

	cout << "Set Bits : " << cnt << endl;

	// Way-2
	cnt = 0;
	for (cin >> n; n > 0; n /= 2) {
		r = n % 2;
		if (r == 1) {
			cnt++;
		}
	}

	cout << "Set Bits : " << cnt << endl;

	// Way-3
	cnt = 0;
	for (cin >> n; n > 0; n = (n & (n - 1)))
	{
		cnt++;
	}

	cout << "Set Bits : " << cnt << endl;

	return 0;
}
















