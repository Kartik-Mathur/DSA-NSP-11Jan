#include <iostream>
using namespace std;

int main() {

	char ch;
	int alpha = 0, digits = 0, special = 0, spaces = 0;

	ch = cin.get(); // Initialisation
	while (ch != '$') { // Condition

		if ((ch >= 'A' and ch <= 'Z') or ((ch >= 'a' and ch <= 'z'))) {
			alpha++;
		}
		else if (ch >= '0' and ch <= '9') {
			digits++;
		}
		else if (ch == ' ' or ch == '\n' or ch == '\t') {
			spaces++;
		}
		else {
			special ++;
		}


		ch = cin.get(); // Updation
	}

	cout << "Alpha: " << alpha << endl;
	cout << "Digits: " << digits << endl;
	cout << "Special: " << special << endl;
	cout << "spaces: " << spaces << endl;

	return 0;
}
















