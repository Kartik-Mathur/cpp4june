#include <iostream>
using namespace std;

int main() {
	int a[100][100];
	int n;
	int m;

	cout << "Enter rows and cols: ";
	cin >> n >> m;
	int number = 1;

	for (int row = 0; row < n; ++row)
	{
		for (int col = 0; col < m; ++col)
		{
			// cin >> a[row][col];
			a[row][col] = number;
			number++;
		}
	}


	for (int row = 0; row < n; ++row)
	{
		for (int col = 0; col < m; ++col)
		{
			cout << a[row][col] << " ";
		}
		cout << endl;
	}

	int key, row, col;
	cout << "Enter key: ";
	cin >> key;

	for (row = 0; row < n; ++row)
	{
		for (col = 0; col < m; ++col)
		{
			if (a[row][col] == key) {
				cout << "Key found at index: " << row << ", " << col << endl;
				break;
			}
		}

		// if col<m, that means break execute hua hai,
		// or we can say key mill gai, toh bas yeh wala loop bhi todd do
		if (col < m) {
			break;
		}

	}

	if (row == n) {
		cout << "Key not found\n";
	}


	return 0;
}
















