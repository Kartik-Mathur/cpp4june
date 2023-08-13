#include <iostream>
using namespace std;

void bubbleSort(int *a, int n, int i) {
	// base case
	if (i == n - 1) {
		return;
	}

	// recursive case
	for (int j = 0; j < n - 1 - i; ++j)
	{
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
	}

	bubbleSort(a, n, i + 1);
}

int main() {

	int a[] = {8, 4, 6, 2, 0, 9, 7, 1};
	int n = sizeof(a) / sizeof(int);

	bubbleSort(a, n, 0);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















