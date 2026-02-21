#include <iostream>
using namespace std;

int main() {

	char a[1000];

	char largest[1000];
	int lar_len = 0;

	int n;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 1000);

		int len = strlen(a);
		if (len > lar_len) {
			// Copy kardo a[] ko largest[] ke andar
			strcpy(largest, a);

			lar_len = len;
		}
	}

	cout << "Largest : " << largest << endl;
	cout << "Len     : " << lar_len << endl;


	return 0;
}
















