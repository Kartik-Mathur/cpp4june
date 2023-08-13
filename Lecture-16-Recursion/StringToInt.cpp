#include <iostream>
using namespace std;

int stringToInt(char*a, int n) {
	if (n == 0) {
		return 0;
	}

	int ld = a[n - 1] - '0';
	int chotaNo = stringToInt(a, n - 1);

	int badaNo = chotaNo * 10 + ld;
	return badaNo;
}

int main() {

	char a[] = "1234";

	int x = stringToInt(a, strlen(a));

	cout << x * 100 + 5 << endl;



	return 0;
}
















