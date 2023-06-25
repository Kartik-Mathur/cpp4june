#include <iostream>
using namespace std;

int main() {
	// Continue statement
	int i = 1;
	while (i <= 5) {
		if (i == 3) {
			i++;
			continue;
		}

		cout << i << " ";
		i++;
	}

	cout << endl;

	for (i = 1; i <= 5; ++i)
	{
		if (i == 3) {
			continue;
		}
		cout << i << " ";
	}
	cout << endl;

	/*
	int i;
	// Understanding Break Statement
	for (i = 0; i < 10; ++i)
	{
	cout << i << " ";

	if (i == 5) {
	break;
	}

	}
	cout << endl;
	*/
	return 0;
}
















