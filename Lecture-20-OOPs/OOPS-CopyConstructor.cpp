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

	// 2. COPY CONSTRUCTOR: Ek Object se doosra Object create krne ke liye
	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	// 3. Copy Assignment Operator: Ek Object jo already bana hua hai, uski value ko
	// doosre object ki value se update krne ke liye
	void operator=(Car &X) {
		cout << "Inside Copy Assignment Operator\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	// 4. Destructor
	~Car() {
		cout << "Deleting Car " << name << endl;
	}


};
////////////////////////////// BLUEPRINT //////////////////////////////

int main() {

	Car A; // It will call default constructor function
	strcpy(A.name, "BMW");

	// A.price = 100;
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

	// COPY ASSIGNMENT OPERATOR
	// D Object bana hua hai
	D = A;


	A.print();
	B.print();
	C.print();
	D.print();

	return 0;
}
















