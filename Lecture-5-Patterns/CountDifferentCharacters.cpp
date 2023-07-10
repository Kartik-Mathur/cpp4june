#include <iostream>
using namespace std;

int main() {

	char ch;
	int whitespace  = 0, special = 0, alpha = 0, digits = 0;
	ch = cin.get();

	while (ch != '$') {

		if (ch == ' ' || ch == '\n' || ch == '\t') {
			whitespace++;
		}
		else if ( (ch >= 'a' and ch <= 'z') || (ch >= 'A' and ch <= 'Z') ) {
			alpha ++;
		}
		else if ( ch >= '0' and ch <= '9') {
			digits ++;
		}
		else {
			special ++;
		}

		ch = cin.get();
	}


	cout << "Spaces: " << whitespace << endl;
	cout << "Alpha: " << alpha << endl;
	cout << "Digits: " << digits << endl;
	cout << "Special: " << special << endl;

	return 0;
}
















