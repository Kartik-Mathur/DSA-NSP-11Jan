#include <iostream>
using namespace std;

char keys[][10] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

void generateStrings(char *ip, int i, char *op, int j) {
	// base case
	if (ip[i] == '\0') {
		op[j] = '\0';
		cout << op << endl;
		return;
	}
	// Recursive case
	int digit = ip[i] - '0';
	for (int k = 0; keys[digit][k] != '\0'; ++k)
	{
		op[j] = keys[digit][k];
		generateStrings(ip, i + 1, op, j + 1);
	}

}

int main() {

	char ip[100];
	cin >> ip;
	char op[100];

	generateStrings(ip, 0, op, 0);

	// int digit = 9;
	// // cout << keys[digit] << endl;

	// for (int i = 0; keys[digit][i] != '\0'; ++i)
	// {
	// 	cout << keys[digit][i] << " ";
	// }


	return 0;
}
















