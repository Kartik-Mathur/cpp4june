#include <iostream>
using namespace std;

// int add(int x, int y) {
// 	int sum = x + y;
// 	return sum;
// }

int add(int x, int y) {
	return x + y;
}

void printOddEven(int c) {
	if (c % 2 == 0) {
		cout << "Even Sum\n";
	}
	else {
		cout << "Odd Sum\n";
	}
}

int main() {

	int a = 11, b = 20;

	int c = add(a, b);

	printOddEven(c);
	printOddEven(20);


	return 0;
}
















