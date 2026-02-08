#include <iostream>
#include <algorithm> // To use sort function
using namespace std;

int main() {

	int a[] = {5, 4, 6, 7, 8, 9, 3, 12, 1};
	int n = sizeof(a) / sizeof(int);

	sort(a, a + n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}

	cout << endl;


	return 0;
}
















