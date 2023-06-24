#include <iostream>
using namespace std;

int main() {
	int n, row, i, no;
	cin >> n;


	row = 1;
	while (row <= n) {
		// 1. Print karo n-row times spaces
		i = 1;
		while (i <= n - row) {
			cout << " ";

			i = i + 1;
		}
		// 2. Print karo row times inc. nos starting from row
		i = 1;
		no = row;
		while (i <= row) {
			cout << no;

			no = no + 1;
			i = i + 1;
		}

		// 3. Print karo row-1 times dec numbers, start: 2*row-2
		i = 1;
		no = 2 * row - 2;
		while (i <= row - 1) {
			cout << no;

			no = no - 1;
			i = i + 1;
		}

		cout << '\n';
		row = row + 1;
	}



	return 0;
}
















