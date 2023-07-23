#include <iostream>
using namespace std;

void update(int &x) {
	x = x + 1;
}

int main() {

	int n = 5;

	cout << "Before update: " << n << endl;
	update(n);
	cout << "After update: " << n << endl;


	return 0;
}
















