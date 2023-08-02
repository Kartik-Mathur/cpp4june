#include <iostream>
using namespace std;

int main() {

	// int a[][100] = {
	// 	{1, 2, 3, 4},
	// 	{5, 6, 7, 8},
	// 	{9, 10, 11, 12}
	// };
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


	return 0;
}
















