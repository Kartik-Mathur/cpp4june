#include <iostream>
using namespace std;

void update(int *x) {
	*x = *x + 1;
}


int main() {

	int a = 10;
	int* ap = &a;

	cout << "Before a: " << a << endl;
	update(ap);
	cout << "After a: " << a << endl;


	return 0;
}
















