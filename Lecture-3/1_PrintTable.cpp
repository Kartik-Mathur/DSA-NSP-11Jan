#include <iostream>
using namespace std;

int main() {

	int far, cel, init, fval, step;

	cin >> init >> fval >> step;

	far = init;

	while (far <= fval) {

		// cel = (5 / 9.0) * (far - 32);
		cel = 5 * (far - 32) / 9;

		cout << far << " : " << cel << endl;


		far = far + step;
	}

	return 0;
}
















