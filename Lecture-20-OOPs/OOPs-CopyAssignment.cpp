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

	Car() {
		cout << "Inside Default Constructor\n";
	}

	Car(char *n, int p, int m, int s) {
		cout << "Inside Parameterized Constructor\n";
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
	}

	// COPY CONSTRUCTOR: Ek Object se doosra Object create krne ke liye
	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}
};
////////////////////////////// BLUEPRINT //////////////////////////////

int main() {

	Car A; // It will call default constructor function
	strcpy(A.name, "BMW");

	A.price = 100;
	A.model = 2020;
	A.seats = 4;


	Car B; // It will call default constructor function
	strcpy(B.name, "Audi");
	B.price = 200;
	B.seats = 2;
	B.model = 2023;

	char x[] = "Maruti";
	Car C(x, 50, 2025, 10);// It will call parameterized constructor function

	// Car D = C; // Copy Constructor ko call krega
	Car D (C); // Copy Constructor ko call krega

	A.print();
	B.print();
	C.print();
	D.print();

	return 0;
}
















