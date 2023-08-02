#include <iostream>
using namespace std;

bool isPermutation(char *a, char*b) {
	int freq[256] = {0};
	int i = 0;
	while (a[i] != '\0') {
		freq[a[i]]++;
		i++;
	}

	i = 0;
	while (b[i] != '\0') {
		freq[b[i]]--;
		i++;
	}

	for (int i = 0; i < 256; ++i)
	{
		if (freq[i] != 0) {
			return false;
		}
	}

	return true;
}

int main() {
	char a[] = "ABCDabcd";
	char b[] = "AaBbCcDd";

	bool ans = isPermutation(a, b);
	if (ans == true) {
		cout << "Permutation\n";
	}
	else {
		cout << "Not a Permutation\n";
	}
	return 0;
}
















