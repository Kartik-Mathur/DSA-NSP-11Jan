#include <iostream>
using namespace std;

class Vector {
	int *a;
	int n;
	int cs;
public:
	Vector(int N = 2) {
		a = new int[N];
		n = N;
		cs = 0;
	}

	void push_back(int d) {
		if (cs == n) {
			int *olda = a;
			a = new int[2 * n];
			n = 2 * n;
			for (int i = 0; i < cs; ++i)
			{
				a[i] = olda[i];
			}
			delete []olda;
		}

		a[cs] = d;
		cs++;
	}

	void pop_back() {
		if (cs > 0) {
			cs--;
		}
	}

	bool empty() {
		return cs == 0;
	}

	int size() {
		return cs;
	}

	int capacity() {
		return n;
	}

	int operator[](int i) {
		return a[i];
	}
};

int main() {

	Vector v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << v.size() << ", " << v.capacity() << endl;

	return 0;
}
















