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
};



int main() {

	Car A; // Meine apna khud ka variable create kar lia that is of class Car
	// and we call "A" an object
	// dot operator
	// A.name = "Maruti";
	strcpy(A.name, "Maruti");
	A.model = 2020;
	A.price = 200;

	// cout << A.name << endl;
	// cout << A.price << endl;
	// cout << A.model << endl;
	A.print();

	Car B;
	strcpy(B.name, "BMW");
	B.model = 2025;
	B.price = 400;

	B.print(); // Toh print ke andar name, model, price will belong to B



	return 0;
}
















