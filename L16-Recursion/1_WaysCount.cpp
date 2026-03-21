#include <iostream>
using namespace std;

int ways(int n, int m) {
	if (n == 0 and m == 0) {
		return 1;
	}
	if (n < 0 or m < 0) {
		return 0;
	}

	return ways(n - 1, m) + ways(n, m - 1);
}

int main() {

	cout << ways(3, 3) << endl;


	return 0;
}
















