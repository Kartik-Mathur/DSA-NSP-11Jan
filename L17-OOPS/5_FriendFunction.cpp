#include <iostream>
using namespace std;

class Car {
private:
	int price;
public:
	char name[100];
	int model;

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Model  : " << model << endl;
		cout << "Price  : " << price << endl << endl;
	}

	Car() {
		cout << "Default Constructor\n";
	}

	Car(char *n, int p, int m) {
		cout << "Parameterized Constructor\n";
		strcpy(name, n);
		price = p;
		model = m;
	}

	Car(int p, int m, char *n) {
		cout << "Parameterized Constructor - 2\n";
		strcpy(name, n);
		price = p;
		model = m;
	}

	Car (Car &X) {
		cout << "Copy Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
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

	// Friend function
	friend void printCar(Car &X);
};

void printCar(Car &X) {
	cout << "Name   : " << X.name << endl;
	cout << "Model  : " << X.model << endl;
	cout << "Price  : " << X.price << endl << endl;
}

int main() {

	Car A;
	strcpy(A.name, "Maruti");
	A.model = 2020;
	A.setPrice(-1200);


	Car B("BMW", 400, 2025);

	char carName[] = "Audi";
	Car C(carName, 200, 2024);

	printCar(A);
	printCar(B);
	printCar(C);


	return 0;
}
















