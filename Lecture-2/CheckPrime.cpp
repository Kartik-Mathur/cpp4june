#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	if (n == 1) {
		cout << "Kya dikkat hai aapko\n";
		return 0;
	}

	bool a;
	a = true;

	i = 2;
	while (i <= n - 1) {

		if (n % i == 0) {
			a = false; // agar a false ho gaya, that means n-> i se divide ho gaya
		}

		i = i + 1;
	}

	if (a == true) {
		cout << "Prime\n";
	}
	else {
		cout << "Not Prime\n";
	}


	cout << "Hello World\n";

	return 0;
}
















