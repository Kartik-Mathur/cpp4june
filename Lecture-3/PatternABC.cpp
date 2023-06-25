#include <iostream>
using namespace std;

int main() {

	int n, row, i;
	char no;
	cin >> n;

	for (row = 1; row <= n; ++row)
	{

		no = 'A';

		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << no << " ";
			no++;
		}

		// cout << ", no : " << no;
		no = no - 1;

		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << no << " ";
			no--;
		}
		cout << endl;
	}

	return 0;
}
















