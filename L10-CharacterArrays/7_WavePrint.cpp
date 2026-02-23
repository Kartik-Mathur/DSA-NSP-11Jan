#include <iostream>
using namespace std;

void print(int a[][10], int n, int m) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void wavePrint(int a[][10], int n, int m) {
	for (int col = 0; col < m; ++col)
	{
		if (col % 2 == 0) {
			for (int row = 0; row < n; ++row)
			{
				cout << a[row][col] << " ";
			}
		}
		else {
			for (int row = n - 1; row >= 0; --row)
			{
				cout << a[row][col] << " ";
			}
		}
	}

	cout << endl;
}

int main() {

	int a[10][10];
	int n, m;
	cout << "Enter rows and cols(max: 10) ";
	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
		}
	}

	print(a, n, m);
	wavePrint(a, n, m);


	return 0;
}
















