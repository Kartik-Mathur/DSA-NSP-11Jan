#include <iostream>
using namespace std;

int* solve() {
	int a = 10;

	return &a;
}

int main() {

	int *x = solve();

	return 0;
}
















