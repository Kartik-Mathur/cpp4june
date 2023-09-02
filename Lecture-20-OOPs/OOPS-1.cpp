#include <iostream>
using namespace std;

////////////////////////////// BLUEPRINT //////////////////////////////
class Car {
public:
	char name[100];
	int price;
	int model;
	int seats;

	void print() {
		cout << "Name : " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Model: " << model << endl;
		cout << "Seats: " << seats << endl << endl;
	}
};
////////////////////////////// BLUEPRINT //////////////////////////////

int main() {

	Car A;
	strcpy(A.name, "BMW");

	A.price = 100;
	A.model = 2020;
	A.seats = 4;


	Car B;
	strcpy(B.name, "Audi");
	B.price = 200;
	B.seats = 2;
	B.model = 2023;


	A.print();
	B.print();

	return 0;
}
















