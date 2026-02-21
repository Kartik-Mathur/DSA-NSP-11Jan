#include <iostream>
using namespace std;

void reverseString(char *a, int i, int j) {
	while (i < j) {
		swap(a[i], a[j]);
		i++;
		j--;
	}
}

void rotateString(char *a, int k) {
	int n = strlen(a);
	k %= n;

	reverseString(a, 0, n - 1); // ReverseEntire string
	// Reverse first k characters
	reverseString(a, 0, k - 1);
	// Reverse last remaining characters
	reverseString(a, k, n - 1);
}

int main() {
	char a[] = "Coding";
	int k = 51214;

	rotateString(a, k);
	cout << a << endl;


	return 0;
}
















