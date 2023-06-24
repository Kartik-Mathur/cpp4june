#include <iostream>
#include <climits>
using namespace std;

int main() {

	int i, n, no, l;
	cin >> n;

	l = INT_MIN;

	i = 1;
	while (i <= n) {
		cin >> no;

		if (no > l) {
			l = no;
		}

		i = i + 1;
	}

	cout << "Largest: " << l << endl;
	return 0;
}
















