#include <iostream>
using namespace std;

bool isSorted(int *a, int n) {
	// base case
	if (n <= 1) {
		return true;
	}
	// recursive case
	if (a[0] <= a[1] and isSorted(a + 1, n - 1) == true) {
		return true;
	}
	else {
		return false;
	}
}

bool isSorted2(int* a, int n) {
	// base case
	if (n <= 1) {
		return true;
	}
	// recursive case
	if (isSorted2(a, n - 1) == true and a[n - 2] <= a[n - 1]) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << isSorted2(a, n) << endl;

	return 0;
}
















