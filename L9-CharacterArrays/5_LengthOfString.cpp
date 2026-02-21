#include <iostream>
#include <cstring>
using namespace std;

int length(char *a) {
	int i = 0;
	while (a[i] != '\0') {
		i++;
	}

	return i;
}

int main() {

	char a[1000];
	cin.getline(a, 1000);

	cout << length(a) << endl;
	cout << strlen(a) << endl;

	return 0;
}
















