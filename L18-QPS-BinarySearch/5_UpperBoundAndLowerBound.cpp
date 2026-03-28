#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	// int a[] = {1, 2, 3, 5};
	int a[] = {1, 3, 4, 4, 4, 4};
	int n = sizeof(a) / sizeof(int);


	// upper_bound, index dega of value > key
	// int *ans = upper_bound(a, a + n, 4);
	// cout << "Address in ans " << ans << endl;
	// cout << "Value at ans " << *ans << endl;
	// cout << ans - a << endl;

	// lower_bound, index dega of value >= key
	// ans = lower_bound(a, a + n, 4);
	// cout << "Address in ans " << ans << endl;
	// cout << "Value at ans " << *ans << endl;
	// cout << ans - a << endl;

	// upper_bound and lower_bound use binary search internally -> fastest way
	int elements = upper_bound(a, a + n, 4) -  lower_bound(a, a + n, 4);
	cout << elements << endl;

	return 0;
}
















