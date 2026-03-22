#include <iostream>
using namespace std;

class Car {
private:
	int price;
public:
	char *name;
	int model;

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Model  : " << model << endl;
		cout << "Price  : " << price << endl << endl;
	}

	Car() {
		cout << "Default Constructor\n";
		name = NULL; // As pointer should not have garbage value in it
	}

	Car(char *n, int p, int m) {
		cout << "Parameterized Constructor\n";
		// name ek pointer hai that can point to heap memory address
		name = new char[strlen(n) + 1]; // Create karo space
		strcpy(name, n); // name ko copy krdo heap memory ke andar
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
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	void operator=(Car &X) {
		cout << "Copy Assignment Operator\n";
		// yaha ho skta hai name already kisi data ko store krke baitha ho
		// Toh pehle name ko delete karo
		if (name != NULL) {
			delete []name;
			name = NULL;
		}
		// new memory create karo to store X.name
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	~Car() {
		cout << "Deleting Car: " << name << endl;
	}

	void operator+=(Car &X) {
		cout << "Operator Overloading\n";
		char *oldname = name;
		name = new char[strlen(oldname) + strlen(X.name) + 1];
		strcpy(name, oldname);
		strcat(name, X.name);

		// Now delete oldname
		delete []oldname;
		oldname = NULL;
		price += X.price;
		model += X.model;
	}

	// GETTER AND SETTER
	void setPrice(int p) {
		if (p > 100 and p < 500) {
			price = p;
		}
		else {
			price = 250;
		}
	}

	int getPrice() {
		return price;
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
	// strcpy(A.name, "Maruti");
	A.setName("Maruti");
	A.model = 2020;
	A.setPrice(-1200);
	cout << A.getPrice() << endl;
	// A.price = 200;
	// cout << A.price << endl;


	Car B("BMW", 400, 2025);
	// strcpy(B.name, "BMW");
	// B.model = 2025;
	// B.price = 400;

	A.print();
	B.print();

	char carName[] = "Audi";
	Car C(carName, 200, 2024); // It will call parameterized constructor function
	C.print();

	char x[] = "Alto";
	Car D(200, 2026, x); // It will call parameterized constructor - 2 function
	D.print();

	Car E = A; // It will call copy constructor
	// Car E(A);  // It's another way of calling copy constructor
	E.print();

	E = C; // Copy Assignment operator (Car E already created hai update ho rhi value h bas)
	E.print();



	return 0;
}
















