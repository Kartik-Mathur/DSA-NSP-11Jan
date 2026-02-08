#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	i = 2;

	while (i <= n - 1) {

		if (n % i == 0) {
			cout << "Not Prime\n";
			return 0; // exit or end
		}

		i = i + 1;
	}

	cout << "Prime\n";

	return 0;
}
















