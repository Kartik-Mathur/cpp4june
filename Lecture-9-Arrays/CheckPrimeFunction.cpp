#include <iostream>
using namespace std;

bool checkPrime(int n);
void printPrimes(int n);


int main() {

	int n = 100;
	printPrimes(n);

	cout << endl;

	return 0;
}



bool checkPrime(int n) {
	int i;
	for (i = 2; i < n; ++i)
	{
		if (n % i == 0) {
			break;
		}
	}
	if (i == n) {
		return true;
	}
	else {
		return false;
	}
}

void printPrimes(int n) {
	for (int i = 2; i <= n; ++i)
	{
		if (checkPrime(i) == true) {
			cout << i << " ";
		}
	}
}
