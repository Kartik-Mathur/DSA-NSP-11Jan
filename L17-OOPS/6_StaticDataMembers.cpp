#include <iostream>
using namespace std;

class Car {
public:
	char *name;
	int price;
	int model;
	// static belongs to class and not objects
	static int cnt;
	const int tyres;
	const int extraTyre;

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Model  : " << model << endl;
		cout << "Price  : " << price << endl << endl;
	}

	Car(): tyres(4), extraTyre(1) {
		cout << "Default Constructor\n";
		name = NULL;
		cnt++;
	}

	Car(char *n, int p, int m): tyres(4), extraTyre(1), price(p) {
		cout << "Parameterized Constructor\n";
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		// price = p;
		model = m;
		cnt++;
	}

	Car(int p, int m, char *n): tyres(4), extraTyre(1) {
		cout << "Parameterized Constructor - 2\n";
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		model = m;
		cnt++;
	}

	Car (Car &X): tyres(4), extraTyre(1) {
		cout << "Copy Constructor\n";
		// DEEP COPY:
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		// SHALLOW COPY:  name = X.name;
		price = X.price;
		model = X.model;
		cnt++;
	}

	void setName(char *n) {
		if (name != NULL) {
			delete []name;
		}

		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	~Car() {
		cnt--;
	}

};


// Class ke bahar we can initialise the static data members
int Car::cnt = 0;


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

	cout << "Total Cars: " << A.cnt << endl;
	cout << "Total Cars: " << Car::cnt << endl;




	return 0;
}
















