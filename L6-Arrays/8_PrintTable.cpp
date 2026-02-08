#include <iostream>
using namespace std;


void printTable(int initialValue, int finalValue, int step) {

	int far, cel;

	far = initialValue;
	while (far <= finalValue) {

		cel = 5 * (far - 32) / 9;
		cout << far << " : " << cel << endl;

		far = far + step;
	}
}

int main() {

	int init, fval, step;
	cin >> init >> fval >> step;

	printTable(init, fval, step);


	return 0;
}
















