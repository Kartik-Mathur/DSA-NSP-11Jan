#include <iostream>
using namespace std;

int main() {

	int n, number;
	cin >> n;

	int r, i;
	number = 1; // Yeh number bahar bana diya har loop se taaki reset hokar 1 na ho

	r = 1; // initialisation
	while (r <= n) { // condition check

		// Logic for every row
		// 1. Print row times number
		i = 1; // Initialisation
		while (i <= r) { // Condition Check
			cout << number << ' ';
			number = number + 1;

			i = i + 1; // Updation
		}


		cout << '\n'; // Next line par jaao when row updates
		r = r + 1; // updation
	}

	return 0;
}
















