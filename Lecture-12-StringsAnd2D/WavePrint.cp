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

	for (int col = 0; col < m; ++col)
	{
		if (col % 2 == 0) {
			// row --> 0,n-1
			for (int row = 0; row < n; ++row)
			{
				cout << a[row][col] << " ";
			}
		}
		else {
			// row --> n-1,0
			for (int row = n - 1; row >= 0; --row)
			{
				cout << a[row][col] << " ";
			}
		}
	}

	cout << endl;


	return 0;
}
















