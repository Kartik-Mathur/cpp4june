#include <iostream>
using namespace std;

int main() {

	int no, i, n;
	cin >> n;
	no = 2;
	while (no <= n)
	{
		bool a;
		a = true;

		i = 2;
		while (i <= no - 1) {
			if (no % i == 0) {
				a = false; // agar a false ho gaya, that means n-> i se divide ho
				// gaya
			}

			i = i + 1;
		}
		if (a == true) {
			cout << no << " ";
		}
		no = no + 1;
	}

	cout << endl;

	return 0;
}
















