#include <iostream>
using namespace std;

int multiply(int a, int b) {
	if (b == 0) {
		return 0;
	}

	int chotiProblem = multiply(a, b - 1);
	int badiProblem = a + chotiProblem;
	return badiProblem;
}

int main() {

	cout << multiply(10, 5) << endl;

	return 0;
}
















