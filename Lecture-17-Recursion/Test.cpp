#include <iostream>
using namespace std;

void subsequence(char *in, int i, char *out, int j) {
	// base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case
	// 1. ith Character ko mat lo output mei
	subsequence(in, i + 1, out, j);
	// 2. ith Character ko le  lo output mei
	out[j] = in[i];
	subsequence(in, i + 1, out, j + 1);
}

int main() {

	char a[] = "abcd";
	char out[100];
	subsequence(a, 0, out, 0);


	return 0;
}













