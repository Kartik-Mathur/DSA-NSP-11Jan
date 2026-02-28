#include <iostream>
using namespace std;

void print2D(int a[][100], int n, int m) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void search2D(int a[][100], int n, int m, int key) {
	int i = 0, j = m - 1;

	while (i<n and j >= 0) {
		if (a[i][j] == key) {
			cout << "Key Found at " <<
			     i << ", " << j << endl;
			return;
		}
		else if (a[i][j] < key) {
			i++;
		}
		else {
			j--;
		}
	}

	cout << "Key Not Found\n";
	return;
}

int main() {
	int a[100][100];
	int n, m;
	cin >> n >> m;
	int number = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = number++;
		}
	}

	print2D(a, n, m);
	int key;
	cin >> key;
	search2D(a, n, m, key);


	return 0;
}
















