#include <iostream>
using namespace std;

int main() {

	int a[] = {4, 1, 3, 2, 0};
	int n = sizeof(a) / sizeof(int);

	for (int j = 1; j <= n - 1; ++j)
	{
		int i = j - 1;
		int handPickedCard = a[j];
		while (i >= 0 and handPickedCard < a[i]) {
			a[i + 1] =  a[i];

			i--;
		}

		a[i + 1] = handPickedCard;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















