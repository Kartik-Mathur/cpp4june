#include <iostream>
using namespace std;

void toh( int n, char src, char helper, char des) {
	// base case
	if (n == 0) {
		return;
	}

	// recursive case
	// 1. n-1 disk uthar kar src se helper pr le jaao
	toh(n - 1, src , des, helper);
	// 2. nth disk ko khud utha kar src se des par rakho
	cout << "Taking disk " << n << " from " << src << " to " << des << endl;
	// 3. n-1 disk utha kar helper se des par le jaao
	toh(n - 1, helper , src , des);
}

int main() {
	int n;
	cin >> n;

	toh(n, 'A', 'B', 'C');

	return 0;
}
















