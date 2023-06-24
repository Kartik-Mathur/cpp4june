#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	if (n == 1) {
		cout << "Kya dikkat hai aapko\n";
		return 0;
	}

	i = 2;
	while (i <= n - 1) {

		if (n % i == 0) {
			cout << "Not Prime\n";
			return 0;
		}

		i = i + 1;
	}

	cout << "Prime\n";
	return 0;
}
















