#include <iostream>
#include <cstring> // strcat
using namespace std;

void appendString(char *a, char *b) {
	int i = strlen(a);
	int j = 0;
	int lenb = strlen(b);

	while (j <= lenb) {
		a[i] = b[j];
		i++;
		j++;
	}
}

int main() {

	char a[100] = "Hello";
	char b[] = "World";
	// appendString(a, b);
	strcat(a, b);
	cout << a << endl;

	return 0;
}
















