#include <iostream>
using namespace std;

int main() {

	int a[100000];
	int n;
	cin >> n;

	int zeroes = 0, ones = 1;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if (a[i] == 0) zeroes++;
		else ones++;
	}

	for (int i = 0; i < zeroes; ++i)
	{
		a[i] = 0;
	}

	for (int i = zeroes; i < ones + zeroes; ++i)
	{
		a[i] = 1;
	}

	cout << "Sorted Array : ";

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















