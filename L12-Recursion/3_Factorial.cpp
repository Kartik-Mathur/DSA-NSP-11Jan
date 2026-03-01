#include <iostream>
using namespace std;

int fact(int n) {
	if (n == 0) {
		return 1;
	}

	return n * fact(n - 1);
}

void factorial(int n, int &ans) {
	if (n == 0) return;

	ans = n * ans;
	factorial(n - 1, ans);
}

int main() {

	cout << fact (5) << endl;
	int ans = 1;
	factorial(5, ans);
	cout << ans << endl;
	return 0;
}
















