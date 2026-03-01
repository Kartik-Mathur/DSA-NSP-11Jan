#include <iostream>
using namespace std;

bool check7(int *a, int n) {
	if (n == 0) {
		return false;
	}


	if (a[0] == 7) {
		return true;
	}

	bool ans = check7(a + 1, n - 1);
	return ans;
}

int first7(int *a, int n) {
	if (n == 0) {
		return -1;
	}

	// Ek bucket ko meine check kia
	if (a[0] == 7) {
		return 0;
	}

	// Choti problem ka answer recursion se pucha
	int ans = first7(a + 1, n - 1);
	if (ans != -1) {
		// Chote array mei jo 7 ka index hoga bade array mei +1 krna padega
		return ans + 1;
	}

	// Agar chote array mei 7 nhi milta toh -1 hi return krna padega
	return -1;
}

int last7(int *a, int n) {
	if (n == 0) {
		return -1;
	}

	if (a[n - 1] == 7) {
		return n - 1;
	}

	return last7(a, n - 1);
}

void all7(int *a, int n, int i) {
	if (i == n) {
		return;
	}


	if (a[i] == 7) {
		cout << i << " ";
	}

	all7(a, n, i + 1);
}

int main() {

	int a[] = {1, 2, 3, 4, 7, 5, 7, 7};
	int n = sizeof(a) / sizeof(int);

	if (check7(a, n)) {
		cout << "7 hai\n";
	}
	else {
		cout << "7 nahi hai\n";
	}

	cout << first7(a, n) << endl;
	cout << last7(a, n) << endl;

	all7(a, n, 0);

	return 0;
}
















