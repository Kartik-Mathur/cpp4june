#include <iostream>
using namespace std;

int main() {

	int *a;
	int n;
	cin >> n;

	a = new int[n];

	for (int i = 0; i < n; ++i)
	{
		a[i] = i + 1;
	}

	delete[] a;
	a = NULL;

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















