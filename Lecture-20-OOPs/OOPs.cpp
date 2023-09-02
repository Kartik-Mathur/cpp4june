#include <iostream>
using namespace std;

////////////////////////////// BLUEPRINT //////////////////////////////
class Car {
public:
	// Data Members: name, price, model, seats
	char name[100];
	int price;
	int model;
	int seats;

	// Functions
	void print() {
		cout << "Name : " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Model: " << model << endl;
		cout << "Seats: " << seats << endl << endl;
	}
};
////////////////////////////// BLUEPRINT //////////////////////////////

int main() {

	Car A; // A is an Object of class Car
	strcpy(A.name, "BMW");
	// C.name[0] = 'B';
	// C.name[1] = 'M';
	// C.name[2] = 'W';
	// C.name[3] = '\0';

	A.price = 100;
	A.model = 2020;
	A.seats = 4;

	// cout << "Name : " << A.name << endl;
	// cout << "Price: " << A.price << endl;
	// cout << "Model: " << A.model << endl;
	// cout << "Seats: " << A.seats << endl;

	Car B;
	strcpy(B.name, "Audi");
	B.price = 200;
	B.seats = 2;
	B.model = 2023;

	// cout << "Name : " << B.name << endl;
	// cout << "Price: " << B.price << endl;
	// cout << "Model: " << B.model << endl;
	// cout << "Seats: " << B.seats << endl;


	A.print();
	B.print();

	return 0;
}
















