#include <iostream>
using namespace std;

int main() {

	int n, ld;
	cin >> n;


	while (n > 0) {
		ld = n % 10;

		cout << ld;

		n /= 10;
	}

	cout << endl;
	return 0;
}
















