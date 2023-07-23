#include <iostream>
using namespace std;

// void printArray(int a[], int n) {
void printArray(int a[6], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void updateArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		a[i] *= a[i];
	}
}

int main() {

	int a[6] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(a) / sizeof(int);

	updateArray(a, n);
	printArray(a, n);

	return 0;
}
















