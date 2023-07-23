#include <iostream>
using namespace std;

void mergeSortedArrays(int a[],
                       int b[], int n, int m) {

	int i = n - 1,
	    j = m - 1,
	    k = n + m - 1;

	while (i >= 0 and j >= 0) {
		if (a[i] >= b[j]) {
			b[k] = a[i];
			k--;
			i--;
		}
		else {
			b[k--] = b[j--];
		}
	}

	// Agar a[] ke andar kch elements reh gaye toh hume
	// unhe b[] ke andar copy krna padega
	while (i >= 0) {
		b[k--] = a[i--];
	}

}

void printArray(int a[6], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


int main() {

	int a[] = {1, 2, 4, 6};
	int b[9] = {3, 5, 7, 8, 9};
	int n = 4, m = 5;

	mergeSortedArrays(a, b, n, m);
	printArray(b, n + m);

	return 0;
}
















