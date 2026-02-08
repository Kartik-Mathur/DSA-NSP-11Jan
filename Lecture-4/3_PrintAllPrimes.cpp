#include <iostream>
using namespace std;

int main() {

	int n, i, j;
	cin >> n;

	for (i = 2; i <= n; ++i)
	{
		// 1. Logic to check i prime hai ya nhi
		for (j = 2; j < i; ++j)
		{
			if (i % j == 0) {
				break;
			}
		}

		// 2. Agar i prime hai toh print else dont
		if (i == j) {
			cout << i << " ";
		}

	}


	cout << endl;

	return 0;
}



