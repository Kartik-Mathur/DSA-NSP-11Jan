#include <iostream>
using namespace std;

char a[][10] = {
	"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
};

void intToString(int n) {
	if (n == 0) {
		return;
	}

	intToString(n / 10);

	int last_digit = n % 10;
	cout << a[last_digit] << " ";
}

int main() {

	int n;
	cin >> n;

	intToString(n);

	return 0;
}
















