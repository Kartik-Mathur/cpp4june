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
	// We have 4 default functions in a class
	// 1. Constructor : Ek Object ko create krne ke liye iski need padti hai
	// 2. Copy Constructor
	// 3. Copy Assignment Operator
	// 4. Destructor

	// CONSTRUCTORS --> Ek Function hi hai, jisse Object create ho paata hai
	// 1. DEFAULT CONSTRUCTOR
	Car() {
		cout << "Inside Default Constructor\n";
	}

	// 2. Parameterized Constructor
	Car(char *n, int p, int m, int s) {
		cout << "Inside Parameterized Constructor\n";
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
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


	A.print();
	B.print();
	C.print();

	return 0;
}
















