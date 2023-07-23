#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5, 2 , 0};
	int n = sizeof(a) / sizeof(int);
	int sum = 4;
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (a[i] + a[j] == sum) {
				cout << a[i] << " " << a[j] << endl;
			}
		}
	}

	return 0;
}
















