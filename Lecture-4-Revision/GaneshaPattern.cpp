#include <iostream>
using namespace std;

int main() {
	int n, row, col;

	cin >> n;
	// 1st row
	for (col = 1; col <= n; ++col)
	{
		if (col == 1 || col > n / 2) {
			cout << "*";
		}
		else {
			cout << " ";
		}
	}
	cout << endl;

	// row --> 1,(n-3)/2
	for (row = 1; row <= (n - 3) / 2; ++row)
	{
		for (col = 1; col <= (n + 1) / 2; ++col)
		{
			if (col == 1 || col == (n + 1) / 2) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}

	// print n times star
	for (col = 1; col <= n; ++col)
	{
		cout << "*";
	}
	cout << endl;

	// row --> 1,(n-3)/2
	for (row = 1; row <= (n - 3) / 2; ++row)
	{
		for (col = 1; col <= n; ++col)
		{
			if (col == n || col == (n + 1) / 2) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}

	for (col = 1; col <= n; ++col)
	{
		if (col == n || col <= (n + 1) / 2) {
			cout << "*";
		}
		else {
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}
















