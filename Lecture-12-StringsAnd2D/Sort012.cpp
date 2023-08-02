#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 1, 0, 0, 0, 2, 1, 1, 2, 0};
	int n = sizeof(a) / sizeof(int);

	int zeros = 0, ones = 0, twos = 0;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] == 0) {
			zeros++;
		}
		else {
			ones++;
		}
	}

	int j = 0;
	for (int i = 0 ; i < zeros ; i++) {
		a[j] = 0;
		j++;
	}
	for (int i = 0 ; i < ones ; i++) {
		a[j] = 1;
		j++;
	}


	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















