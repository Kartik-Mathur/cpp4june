#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {

	int s = 0, e = n - 1;
	while (s <= e) {
		int m = (s + e) / 2;

		if (a[m] == key) {
			return m;
		}
		else if (key > a[m]) {
			s = m + 1;
		}
		else {
			e = m - 1;
		}
	}

	return -1;
}


void printArray(int a[6], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);
	int key;

	printArray(a, n);
	cin >> key;
	cout << "Index: " << binarySearch(a, n, key) << endl;

	return 0;
}
















