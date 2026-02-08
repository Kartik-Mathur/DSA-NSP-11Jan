#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 30;
	while (i >= 0) {

		int x = (n & (1 << i));

		if ( x > 0) {
			cout << 1;
		}
		else {
			cout << 0;
		}

		i--;
	}

	cout << endl;

	return 0;
}
















