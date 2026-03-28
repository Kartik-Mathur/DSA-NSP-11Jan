#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v = {1, 2, 3, 4, 5};
	vector<int> v1 = v; // Copy constructor
	// vector<int> v1(v); // Copy constructor


	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
















