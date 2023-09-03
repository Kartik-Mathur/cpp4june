#include <iostream>
using namespace std;

void replaceHi(char* a, int i, char *out, int j) {
	// base case
	if (a[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case
	if (a[i] == 'h' and
	        (a[i + 1] != '\0' and a[i + 1] == 'i') and
	        (a[i + 2] != '\0' and a[i + 2] == 't')) {
		out[j] = a[i];
		out[j + 1] = a[i + 1];
		out[j + 2] = a[i + 2];
		replaceHi(a, i + 3, out, j + 3);
	}
	else if (a[i] == 'h' and a[i + 1] == 'i') {
		replaceHi(a, i + 2, out, j);
	}
	else {
		out[j] = a[i];
		replaceHi(a, i + 1, out, j + 1);
	}
}

void replaceBye(char* a, int i, char *out, int j) {
	// base case
	if (a[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case
	if (a[i] == 'h' and
	        (a[i + 1] != '\0' and a[i + 1] == 'i') and
	        (a[i + 2] != '\0' and a[i + 2] == 't')) {
		out[j] = a[i];
		out[j + 1] = a[i + 1];
		out[j + 2] = a[i + 2];
		replaceBye(a, i + 3, out, j + 3);
	}
	else if (a[i] == 'h' and a[i + 1] == 'i') {
		out[j] = 'b';
		out[j + 1] = 'y';
		out[j + 2] = 'e';
		replaceBye(a, i + 2, out, j + 3);
	}
	else {
		out[j] = a[i];
		replaceBye(a, i + 1, out, j + 1);
	}
}

int main() {

	char a[10000], out[10000];
	cin >> a;

	replaceHi(a, 0, out, 0);
	replaceBye(a, 0, out, 0);

	return 0;
}
















