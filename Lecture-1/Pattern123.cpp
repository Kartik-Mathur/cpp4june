#include <iostream>
using namespace std;

int main() {

	int n, row, no, i;
	cin >> n;

	no = 1;

	row = 1;
	while (row <= n) {
		// Print numbers row times
		i = 1;
		while (i <= row) {
			cout << '*' << " ";

			// no = no + 1;
			i = i + 1;
		}

		row = row + 1;
		cout << '\n';
	}

	return 0;
}
















