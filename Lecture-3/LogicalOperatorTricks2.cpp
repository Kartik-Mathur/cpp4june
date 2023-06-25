#include <iostream>
using namespace std;

int main() {

	int a = 0;
	int b = 20;

	if (a++ || ++b) {
		++a;
	}
	else {
		++b;
	}

	cout << a << endl; //  2
	cout << b << endl; // 21

	return 0;
}
















