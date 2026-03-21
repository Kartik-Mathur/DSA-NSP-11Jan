#include <iostream>
using namespace std;

int main() {
	int n, m;
	int **arr = NULL;

	cin >> n >> m;
	// Create the memory
	arr = new int*[n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[m];
	}

	// Use the memory
	int number = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			arr[i][j] = number++;
		}
	}


	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// Free the space
	for (int i = 0; i < n; ++i)
	{
		delete []arr[i];
	}

	delete []arr;

	// NULL ko point krwado so that we should not use garbage....
	arr = NULL;


	return 0;
}
















