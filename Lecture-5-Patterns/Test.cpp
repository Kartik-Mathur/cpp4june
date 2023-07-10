#include <iostream>
using namespace std;

int main() {

	int n, row, i;
	cin >> n;
	for (row = n; row >= 2; row--)
	{
		// 1. Print row times star
		for (i = 0; i < row; ++i)
		{
			cout << "*";
		}
		// 2. Print 1 space
		cout << " ";
		// 3. Print n-row+1 times star
		for (i = 0; i < n - row + 1; ++i)
		{
			cout << "*";
		}
		// 4. Print 1 space
		cout << " ";
		// 5. Print n-row+1 times star
		for (i = 0; i < n - row + 1; ++i)
		{
			cout << "*";
		}
		// 6. Print 1 space
		cout << " ";
		// 7. Print row times star
		for (i = 0; i < row; ++i)
		{
			cout << "*";
		}

		cout << endl;
	}

	for (row = 1; row <= n; ++row)
	{
		// 1. Print row times star
		for (i = 0; i < row; ++i)
		{
			cout << "*";
		}
		// 2. Print 1 space
		cout << " ";
		// 3. Print n-row+1 times star
		for (i = 0; i < n - row + 1; ++i)
		{
			cout << "*";
		}
		// 4. Print 1 space
		cout << " ";
		// 5. Print n-row+1 times star
		for (i = 0; i < n - row + 1; ++i)
		{
			cout << "*";
		}
		// 6. Print 1 space
		cout << " ";
		// 7. Print row times star
		for (i = 0; i < row; ++i)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}
















