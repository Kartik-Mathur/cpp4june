#include <iostream>
using namespace std;

bool isPermutation(char *a, char*b) {
	int freq[26] = {0};
	int i = 0;
	while (a[i] != '\0') {
		int indx = a[i] - 'a';
		freq[indx]++;

		i++;
	}

	i = 0;
	while (b[i] != '\0') {
		int indx = b[i] - 'a';
		freq[indx]--;

		i++;
	}

	for (int i = 0; i < 26; ++i)
	{
		if (freq[i] != 0) {
			return false;
		}
	}

	return true;
}

int main() {
	char a[] = "yaxbcdcu";
	char b[] = "ccbadxy";

	bool ans = isPermutation(a, b);
	if (ans == true) {
		cout << "Permutation\n";
	}
	else {
		cout << "Not a Permutation\n";
	}
	return 0;
}
















