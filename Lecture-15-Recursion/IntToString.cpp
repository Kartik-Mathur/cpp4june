#include <iostream>
using namespace std;

string s[] =  {
	"Zero",	"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
};

void solve(int n) {
	// base case
	if (n == 0) {
		return;
	}

	// recursive case
	int ld = n % 10;
	solve(n / 10);
	cout << s[ld] << " ";
}

int main() {

	solve(2048);


	return 0;
}
















