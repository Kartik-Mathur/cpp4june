#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	int asciiCode = ch;

	if (asciiCode >= 65 && asciiCode <= 90) {
		cout << "Uppercase\n";
	}
	else if (asciiCode >= 97 and asciiCode <= 122) {
		cout << "Lowercase\n";
	}
	else {
		cout << "Not an alphabet\n";
	}

	return 0;
}
















