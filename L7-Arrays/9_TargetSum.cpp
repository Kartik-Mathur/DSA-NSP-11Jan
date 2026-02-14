#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 4, 2, 5, 3};
	int n = sizeof(a) / sizeof(int);

	int target = 6;

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{

			if (a[i] + a[j] == target) {
				cout << a[i] << ", " << a[j] << endl;
			}
		}
	}


	return 0;
}
















