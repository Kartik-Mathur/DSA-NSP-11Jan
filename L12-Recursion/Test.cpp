#include <iostream>
using namespace std;

bool isSorted(int *a, int n) {
	// base case
	if (n == 1 or n == 0) {
		return true;
	}

	// recursive case
	bool isChotaSorted = isSorted(a + 1, n - 1);
	if (a[0] <= a[1] and isChotaSorted == true) {
		return true;
	}

	return false;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);


	return 0;
}
















