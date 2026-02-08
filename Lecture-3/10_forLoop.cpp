#include <iostream>
using namespace std;

int main() {

	int i = 1;
	while (i <= 5) {
		cout << i << " ";

		i++;
	}

	cout << endl;

	for (int i = 1 ; i <= 5 ; i++) {
		cout << i << " ";
	}

	cout << endl;

	i = 1;
	for ( ; i <= 5 ; ) {
		cout << i << " ";

		i++;
	}

	cout << endl;


	i = 1;
	for ( ;  ; ) {


		cout << i << " ";
		if (i == 5) {
			break;
		}
		i++;
	}

	cout << endl;

	return 0;
}
















