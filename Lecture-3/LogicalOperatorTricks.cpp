#include <iostream>
using namespace std;

int main() {

	// T && T = T
	// T && F = F
	// F && T = F
	// F && F = F

	int a = -2;
	int b = 20;

	if (a++ && ++b) {
		++b;
	}
	else {
		++a;
	}

	cout << a << endl; // 0  -1  -1  -1   0
	cout << b << endl; // 21 22  21  20  20

	return 0;
}
















