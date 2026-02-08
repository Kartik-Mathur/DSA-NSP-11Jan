#include <iostream>
using namespace std;

int main() {

	char ch;
	int cnt = 0;

	// cin >> ch; // Initialisation
	ch = cin.get();
	while (ch != '$') { // Condition Check
		cnt++;

		// cin >> ch; // Updation
		ch = cin.get();
	}

	cout << "Count of characters : " << cnt << endl;


	return 0;
}
















