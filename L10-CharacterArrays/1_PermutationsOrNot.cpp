#include <iostream>
using namespace std;

bool isPermutation(char *a, char *b) {

	int freq[26] = {0};

	for (int i = 0; a[i] != '\0'; ++i)
	{
		char ch = a[i];
		int indx = ch - 'a';

		freq[indx]++;
	}

	for (int i = 0; b[i] != '\0'; ++i)
	{
		char ch = b[i];
		int indx = ch - 'a';

		freq[indx]--;
	}

	for (int i = 0; i < 26; ++i)
	{
		if (freq[i] != 0) {
			// This means both strings dont have same number of occurances for a character
			return false;
		}
	}

	// Loop se bahar aa gaye means freq[] ki har bucket is 0
	return true;
}


int main() {

	char a[] = "abbadc";
	char b[] = "aadbcb";

	if (isPermutation(a, b) == true) {
		cout << "Permutation hai\n";
	}
	else {
		cout << "Permutation nahi hai\n";
	}


	return 0;
}
















