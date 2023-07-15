#include <iostream>
using namespace std;

int main() {

	int a[] = {7, 10, 9, 4, 8, 1220, 5, 0};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1; ++j)
		{
			if (a[j] > a[j + 1]) {
				// a[j] = (a[j] + a[j + 1]) - (a[j + 1] = a[j]);
				swap(a[j], a[j + 1]); // Inbuilt
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}
















