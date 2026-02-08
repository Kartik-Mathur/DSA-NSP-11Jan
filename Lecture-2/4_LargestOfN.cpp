#include <iostream>
#include <climits>
// INT_MIN: -2^31
// INT_MAX: 2^31 - 1
using namespace std;

/*
	N = 5
	1 3 2 5 4

	Output: 5
*/

int main() {

	int ans = INT_MIN;
	int n;
	int i, number;

	cin >> n; // Itne numbers user input krega jismei se largest batana h

	i = 1; // Initialisation
	while (i <= n) { // Condition Check
		// Loop ke andar ek ek krke hum numbers input krenge
		cin >> number;

		// if number is greater than ans then update ans as bada number milla h
		if (number > ans) {
			ans = number;
		}

		i = i + 1; // Updation
	}

	cout << "Largest : " << ans << endl;

	return 0;
}
















