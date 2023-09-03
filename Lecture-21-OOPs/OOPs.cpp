#include <iostream>
using namespace std;

////////////////////////////// BLUEPRINT //////////////////////////////
class Car {
private:
	int price;

public:
	char *name;
	int model;
	int seats;

	void print() {
		cout << "Name : " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Model: " << model << endl;
		cout << "Seats: " << seats << endl << endl;
	}

	Car() {
		name = NULL;
	}

	Car(char *n, int p, int m, int s) {
		name = new char[strlen(n) + 1]; // step 1
		strcpy(name, n); // step 2
		price = p;
		model = m;
		seats = s;
	}

	Car(Car &X) {
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	void operator=(Car &X) {
		if (name != NULL) {
			delete[] name;
		}
		name = new char[strlen(X.name) + 1];
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

	void setName(char *n) {
		if (name != NULL) {
			delete[] name;
		}
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

};
////////////////////////////// BLUEPRINT //////////////////////////////

int main() {

	Car A;
	// strcpy(A.name, "BMW");
	A.setName("BMW");
	A.setPrice(180);
	A.model = 2020;
	A.seats = 4;

	Car B;
	// strcpy(B.name, "Audi");
	B.setName("Audi");
	B.setPrice(120);
	B.seats = 2;
	B.model = 2023;


	// B = A;
	A.print();
	B.print();


	return 0;
}
















