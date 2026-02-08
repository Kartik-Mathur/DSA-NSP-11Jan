#include <iostream>
#include <climits> // INT_MIN: -2^31
using namespace std;

int main() {
	// int a[] = {4, 5, 1, 2, 3};
	// int n = sizeof(a) / sizeof(int);

	int a[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	// Logic to find largest element
	int mx = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] > mx) {
			mx = a[i];
		}
	}

	cout << "largest : " << mx << endl;

	return 0;
}
















