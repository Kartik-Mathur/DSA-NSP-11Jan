#include <iostream>
using namespace std;

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


	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	// Search key
	int key;
	cout << "Enter key to search: ";
	cin >> key;
	bool keyFound = false;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i][j] == key) {
				cout << "Key Found: " << i << ", " << j << endl;
				keyFound = true;
				break; // Yeh j ke loop se bahar nikal dega
			}
		}

		if (keyFound == true) {
			//  yeh i ke loop se bahar nikal dega
			break;
		}
	}

	if (keyFound == false) {
		cout << "Not Found\n";
	}

	return 0;
}
















