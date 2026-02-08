#include <iostream>
using namespace std;

int main() {

	int n, ans = 0, no;
	cin >> n;

	int i = 1;
	while (i <= n) {
		cin >> no;

		ans = ans ^ no;

		++i; // i = i + 1
	}

	cout << "Unique number: " << ans << endl;

	return 0;
}
















