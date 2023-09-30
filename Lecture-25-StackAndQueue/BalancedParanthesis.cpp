#include <iostream>
using namespace std;

void generateParanthesis(char *a, int i, int n, int open, int close) {
	// base case
	if (i == 2 * n) {
		a[i] = '\0';
		cout << a << endl;
		return;
	}

	// recursive case
	if (open < n) {
		a[i] = '(';
		generateParanthesis(a, i + 1, n, open + 1, close);
	}

	if (open > close) {
		a[i] = ')';
		generateParanthesis(a, i + 1, n, open, close + 1);
	}
}



int main() {

	int n = 3;
	char a[100];
	generateParanthesis(a, 0, n, 0, 0);

	return 0;
}
















