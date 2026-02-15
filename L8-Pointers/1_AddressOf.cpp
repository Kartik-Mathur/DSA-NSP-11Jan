#include <iostream>
using namespace std;

int main() {

	int a = 1;
	float f = 1.11;
	bool b = true;

	cout << "&a : " << &a << endl;
	cout << "&f : " << &f << endl;
	cout << "&b : " << &b << endl;

	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << arr << endl;
	cout << &arr[0] << endl;

	cout << "sizeof(&a) : " << sizeof(&a) << endl;
	cout << "sizeof(&f) : " << sizeof(&f) << endl;

	return 0;
}
















