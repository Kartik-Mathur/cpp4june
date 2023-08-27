#include <iostream>
using namespace std;

int main() {

	int r, c;
	cin >> r >> c;

	int **a = new int*[r];

	for (int i = 0; i < r; ++i)
	{
		a[i] = new int[c];
	}

	int number = 1;

	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			a[i][j] = number++;
		}
	}

	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}




	return 0;
}
















