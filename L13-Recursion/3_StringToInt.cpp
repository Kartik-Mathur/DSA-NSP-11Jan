#include <iostream>
using namespace std;

int stringToInt(char*a, int n) {
	if (n == 0) {
		return 0;
	}

	int chotaAns = stringToInt(a, n - 1);
	int last_digit = a[n - 1] - '0';
	return chotaAns * 10 + last_digit;
}

int main() {

	char a[] = "1234";
	int n = strlen(a);
	int ans = stringToInt(a, n);
	cout << ans << endl;
	cout << ans + 10 << endl;


	return 0;
}
















