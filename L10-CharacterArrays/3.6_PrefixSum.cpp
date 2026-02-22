#include <iostream>
#include <climits>
using namespace std;

int main() {

	int a[] = {1, 3, 2, 4, 5};
	int n = sizeof(a) / sizeof(int);
	int ps[100];

	ps[0] = a[0];
	for (int i = 1; i < n; ++i)
	{
		ps[i] = ps[i - 1] + a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << ps[i] << " ";
	}
	cout << endl;


	return 0;
}
















