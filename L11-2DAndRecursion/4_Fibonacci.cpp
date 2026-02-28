#include <iostream>
using namespace std;

/*
int fibo(int n) {
	// base case
	if (n == 0 or n == 1) {
		return n;
	}

	// recursive case
	int chotiProblem1 = fibo(n - 1); // Pure assumption
	int chotiProblem2 = fibo(n - 2); // Pure assumption

	int badiProblem = chotiProblem1 + chotiProblem2;
	return badiProblem;
}
*/

int fibo(int n) {
	// base case
	if (n == 0 or n == 1) {
		return n;
	}

	// recursive case
	return fibo(n - 1) + fibo(n - 2);
}

int main() {

	int n;
	cin >> n;

	cout << fibo(n) << endl;

	return 0;
}
















