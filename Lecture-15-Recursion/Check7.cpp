#include <iostream>
using namespace std;

bool check7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return false;
	}
	// recursive case
	if (a[i] == 7) {
		return true;
	}
	return check7(a, n, i + 1);
}

int first7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] == 7) {
		return i;
	}
	return first7(a, n, i + 1);
}

int last7(int *a, int n) {
	// base case
	if (n == 0) {
		return -1;
	}
	// recursive case
	if (a[n - 1] == 7) {
		return n - 1;
	}
	int choteMei7KaIndex = last7(a, n - 1);
	return choteMei7KaIndex;
}

void all7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return;
	}

	// recursive case
	if (a[i] == 7) {
		cout << i << " ";
	}
	all7(a, n, i + 1);
}


int main() {

	int a[] = {1, 2, 3, 7, 4, 5, 7, 7};
	int n = sizeof(a) / sizeof(int);
	cout << check7(a, n, 0) << endl;
	cout << first7(a, n, 0) << endl;
	cout << last7(a, n) << endl;

	all7(a, n, 0);
	cout << endl;

	return 0;
}
















