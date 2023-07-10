#include <iostream>
using namespace std;

int a = -100;

int main() {
	cout << a << endl;

	int a = 10;
	int b = 20;

	if (a > 0) {
		int b = 100;

		cout << "a+b : " << a + b << endl; // 110
	}

	::a = ::a + 500;
	cout << "a+b : " << ::a + b << endl; // 30

	int i;
	for (i = 0 ; i < 5; i++) {
		// cout << "i inside: " << i << endl; // 1 2 3 4
	}

	// cout << "Value of i outside: " << i << endl; // 5

	return 0;
}












