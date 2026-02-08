#include <iostream>
using namespace std;

int main() {

	int alpha = 0, digits = 0,
	    special = 0, spaces = 0;

	char ch;

	// cin >> ch; // Initialisation
	ch = cin.get();
	while (ch != '$') { // Condition Check

		if ((ch >= 'a' && ch <= 'z') ||
		        (ch >= 'A' && ch <= 'Z'))alpha++;
		else if (ch >= '0' && ch <= '9')digits++;
		else if (ch == ' ')spaces++;
		else special++;

		ch = cin.get();
	}

	cout << "Alpha: " << alpha << endl;
	cout << "Digits: " << digits << endl;
	cout << "Special: " << special << endl;
	cout << "spaces: " << spaces << endl;

	return 0;
}
















