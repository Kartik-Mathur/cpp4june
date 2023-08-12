#include <iostream>
using namespace std;

int solve(int x, int n) {
	if (n == 0) {
		return 1;
	}

	return x * solve(x, n - 1);
}

int main() {

	cout << solve(2, 4) << endl;


	return 0;
}
















