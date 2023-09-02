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

	}

	Car(char *n, int p, int m, int s) {
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
	}

	Car(Car &X) {
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	void operator=(Car &X) {
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

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
	// A>B : A ne operator '>' ko call kia hai and B object comparison ke liye
	// use hoga
	bool operator>(Car X) {
		if (price > X.price) {
			return true;
		}
		else {
			return false;
		}
	}
	//////////////////////////// Operator Overloading	////////////////////////////

};
////////////////////////////// BLUEPRINT //////////////////////////////

int main() {

	Car A;
	strcpy(A.name, "BMW");
	A.setPrice(180);
	A.model = 2020;
	A.seats = 4;

	Car B;
	strcpy(B.name, "Audi");
	B.setPrice(120);
	B.seats = 2;
	B.model = 2023;



	A.print();
	B.print();

	if (A > B) {
		cout << "A is costly\n";
	}
	else {
		cout << "B is costly\n";
	}


	return 0;
}
















