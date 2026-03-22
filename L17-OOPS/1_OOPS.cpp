#include <iostream>
using namespace std;

// BLUE PRINT
class Car {
public:
	// Data members
	char name[100];
	int model;
	int price;

	// Functions
	void print() {
		cout << "Name   : " << name << endl;
		cout << "Model  : " << model << endl;
		cout << "Price  : " << price << endl << endl;
	}

	// 1. Default Constructor
	// Constructor kuch return nhi krta iska name is same as class name
	Car() {
		cout << "Default Constructor\n";
	}

	// 2. Parameterized Constructor
	Car(char *n, int p, int m) {
		cout << "Parameterized Constructor\n";
		strcpy(name, n);
		price = p;
		model = m;
	}

	// 3. Parameterized Constructor
	Car(int p, int m, char *n) {
		cout << "Parameterized Constructor - 2\n";
		strcpy(name, n);
		price = p;
		model = m;
	}

	// 4. Copy Constructor
	// Car B = A; // A will go inside Car X
	Car (Car &X) {
		cout << "Copy Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	// 5. Copy Assignment Operator Function
	void operator=(Car &X) {
		cout << "Copy Assignment Operator\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	// 6. Destructor
	~Car() {
		cout << "Deleting Car: " << name << endl;
	}
};



int main() {

	Car A; // It will call default constructor function
	strcpy(A.name, "Maruti");
	A.model = 2020;
	A.price = 200;


	Car B; // It will call default constructor function
	strcpy(B.name, "BMW");
	B.model = 2025;
	B.price = 400;

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
















