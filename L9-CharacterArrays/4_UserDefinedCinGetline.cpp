#include <iostream>
using namespace std;

void takeInput(char *a, int n, char x = '\n') {
	char ch;
	ch = cin.get();

	int indx = 0;
	while (ch != x and indx < n - 1) {

		a[indx] = ch;

		indx ++;

		ch = cin.get();
	}

	a[indx] = '\0';
}

int main() {

	char a[1000];
	takeInput(a, 5, '$');

	cout << a << endl;

	return 0;
}
















