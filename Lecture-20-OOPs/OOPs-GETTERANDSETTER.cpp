#include <iostream>
using namespace std;

////////////////////////////// BLUEPRINT //////////////////////////////
class Car {
private:
	int price;

public:
	char name[100];

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

	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	void operator=(Car &X) {
		cout << "Inside Copy Assignment Operator\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	// GETTER AND SETTER
	void setPrice(int p) {
		if (p > 100 and p < 200) {
			price = p;
		}
		else {
			price = 150;
		}
	}

	int getPrice() {
		return price;
	}


	//////////////////////////// Operator Overloading	////////////////////////////

	//////////////////////////// Operator Overloading	////////////////////////////

};
////////////////////////////// BLUEPRINT //////////////////////////////

int main() {

	Car A; // It will call default constructor function
	strcpy(A.name, "BMW");

	// A.price = 100;
	A.setPrice(-100);
	A.model = 2020;
	A.seats = 4;

	Car B; // It will call default constructor function
	strcpy(B.name, "Audi");
	// B.price = 200;
	B.setPrice(200);
	B.seats = 2;
	B.model = 2023;

	char x[] = "Maruti";
	Car C(x, 50, 2025, 10);// It will call parameterized constructor function

	// Car D = C; // Copy Constructor ko call krega
	Car D (C); // Copy Constructor ko call krega

	// COPY ASSIGNMENT OPERATOR
	// D Object bana hua hai
	D = A;

	cout << A.getPrice() << endl;
	cout << B.getPrice() << endl;

	A.print();
	B.print();
	C.print();
	D.print();

	return 0;
}
















