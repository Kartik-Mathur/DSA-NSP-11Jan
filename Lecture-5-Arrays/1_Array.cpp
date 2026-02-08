#include <iostream>
using namespace std;

int main() {

	int a[100];

	int n;
	cin >> n; // Tell us the the total buckets to input(max: 100)

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i]; // or a[i] = i+1; // for larger values of n
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	return 0;
}
















