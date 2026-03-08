#include <iostream>
using namespace std;

void subsequences(char *ip, int i, char *op, int j) {
	if (ip[i] == '\0') {
		op[j] = '\0';
		cout << op << endl;
		return;
	}

	// 1. ith character ko mat lo
	subsequences(ip, i + 1, op, j);
	// 2. ith character ko le lo
	op[j] = ip[i];
	subsequences(ip, i + 1, op, j + 1);
}

int main() {

	char a[] = "abc";
	char op[100];

	subsequences(a, 0, op, 0);

	return 0;
}
















