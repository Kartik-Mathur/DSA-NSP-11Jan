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

int main() {

	int n = 70;
	if (checkPrime(n)) {
		cout << "Prime hai\n";
	}
	else {
		cout << "Prime nahi hai\n";
	}

	return 0;
}
















