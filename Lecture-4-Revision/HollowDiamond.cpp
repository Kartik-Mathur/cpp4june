#include <iostream>
using namespace std;

int main() {


	int n, row, c, stars, spaces;
	cin >> n;

	for (row = 1; row <= (n + 1) / 2; ++row)
	{
		if (row == 1) {
			// Print N times stars
			for (stars = 1; stars <= n; ++stars)
			{
				cout <<  "* ";
			}
		}
		else {
			// Print (n-(2*row-3))/2 stars
			for (stars = 1; stars <= (n - (2 * row - 3)) / 2; ++stars)
			{
				cout << "* ";
			}
			// Print 2*row-3 times spaces
			for (spaces = 1; spaces <= 2 * row - 3; ++spaces)
			{
				cout << "  ";
			}
			// Print (n-(2*row-3))/2 stars
			for (stars = 1; stars <= (n - (2 * row - 3)) / 2; ++stars)
			{
				cout <<  "* ";
			}
		}

		cout << endl;
	}

	for (row = (n + 1) / 2 - 1; row >= 1; --row)
	{
		if (row == 1) {
			// Print N times stars
			for (stars = 1; stars <= n; ++stars)
			{
				cout <<  "* ";
			}
		}
		else {
			// Print (n-(2*row-3))/2 stars
			for (stars = 1; stars <= (n - (2 * row - 3)) / 2; ++stars)
			{
				cout << "* ";
			}
			// Print 2*row-3 times spaces
			for (spaces = 1; spaces <= 2 * row - 3; ++spaces)
			{
				cout << "  ";
			}
			// Print (n-(2*row-3))/2 stars
			for (stars = 1; stars <= (n - (2 * row - 3)) / 2; ++stars)
			{
				cout <<  "* ";
			}
		}

		cout << endl;
	}

	return 0;
}
















