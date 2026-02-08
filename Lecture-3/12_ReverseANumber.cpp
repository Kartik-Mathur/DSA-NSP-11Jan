#include <iostream>
using namespace std;

int main() {

	int a;
	// cin >> a;
	int ans = 0;
	for (cin >> a ; a > 0; a /= 10)
	{
		int ld = a % 10;

		ans = ans * 10 + ld;
	}
	cout << ans << endl;


	return 0;
}
















