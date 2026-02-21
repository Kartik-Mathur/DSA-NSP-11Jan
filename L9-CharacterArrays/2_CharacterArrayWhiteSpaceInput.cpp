#include <iostream>
using namespace std;

int main() {

	char a[100];

	// cin.getline(array_name, number_of_buckets, delimiter_character);

	cin.getline(a, 5); // By default delimiter is '\n'
	// cin.getline(a, 100, '$');

	cout << a << endl;

	return 0;
}
















