#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;
	while (i <= n) {

		if (i == 3) {
			i++; // Change the i so that it should not stuck in infinite loop
			continue;
		}

		cout << i << " ";

		i++;
	}

	cout << endl;

	return 0;
}
















