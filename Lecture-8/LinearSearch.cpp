#include <iostream>
using namespace std;

int main() {

	int a[5] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	int key = 40, i;

	for (i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			cout << "Key Found: " << i << endl;
			break;
		}
	}

	if (i == n) {
		cout << "Not Found\n";
	}


	return 0;
}
















