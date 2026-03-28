#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	// vector<int> v(n);
	vector<int> v(n, 0); // Will create n buckets with initial value zero
	// vector<int> v(n, 10); // Will create n buckets with initial value 10
	// Or we can also do this like
	/*
		vector<int> v;
		v.reserve(n);
	*/
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
















