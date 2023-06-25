#include <iostream>
using namespace std;

int main() {

	int n, no, i;
	bool prime;
	cin >> n;

	for (no = 2; no <= n; ++no)
	{
		// Check if the no is prime or not, if prime then print it
		prime = true; // Pehle maan lete hai, number prime hai

		// ab no ko [2,no-1] tak har ek se divide krke dekho
		// agar kisi se bhi divide ho gaya prime nhi hoga

		for (i = 2 ; i <= no - 1 ; i++) {
			if (no % i == 0) {
				prime = false;
			}
		}

		// check karo prime ki value agar true hai toh print kardo
		if (prime == true) {
			cout << no << " ";
		}
	}

	cout << endl;
	return 0;
}
















