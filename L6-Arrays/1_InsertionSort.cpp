#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 2, 1, 3, 4};
	int n = sizeof(a) / sizeof(int), j;

	for (int i = 1; i < n; ++i)
	{
		int x = a[i];

		for (j = i - 1; j >= 0 and x < a[j]; --j)
		{
			a[j + 1] = a[j];
		}

		a[j + 1] = x;
	}


	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	return 0;
}
















