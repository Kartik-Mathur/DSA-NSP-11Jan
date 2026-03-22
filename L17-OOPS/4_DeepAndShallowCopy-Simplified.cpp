#include <iostream>
using namespace std;

class Car {
public:
	char *name;
	int price;
	int model;

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Model  : " << model << endl;
		cout << "Price  : " << price << endl << endl;
	}

	Car() {
		cout << "Default Constructor\n";
		name = NULL;
	}

	Car(char *n, int p, int m) {
		cout << "Parameterized Constructor\n";
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		model = m;
	}

	Car(int p, int m, char *n) {
		cout << "Parameterized Constructor - 2\n";
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		model = m;
	}

	Car (Car &X) {
		cout << "Copy Constructor\n";
		// DEEP COPY:
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		// SHALLOW COPY:  name = X.name;
		price = X.price;
		model = X.model;
	}

	~Car() {
		// cout << "Deleting Car: " << name << endl;
		// delete []name;
	}

	void setName(char *n) {
		if (name != NULL) {
			delete []name;
		}

		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

};



int main() {

	Car A;
	char x[] = "Maruti";
	A.setName(x);
	A.model = 2020;
	A.price = 200;

	char y[] = "BMW";
	Car B(y, 400, 2025);

	Car C = B;
	Car D = C;

	D.name[0] = 'T';

	A.print();
	B.print();
	C.print();
	D.print();




	return 0;
}
















