#include <iostream>
using namespace std;

bool checkPrime(int n) {

	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

void printAllPrimes(int n) {
	for (int i = 2; i <= n; ++i)
	{
		if (checkPrime(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
}

int main() {

	int n = 70;
	printAllPrimes(n);


	return 0;
}
















