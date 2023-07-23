#include <iostream>
using namespace std;

int main() {

	// Switch case mei, we can only check characters and integers
	char ch;
	cin >> ch;

	switch (ch) {
	case 'n':
	case 'N':
		cout << "North\n";
		break;
	case 'e':
	case 'E':
		cout << "East\n";
		break;
	case 's':
	case 'S':
		cout << "South\n";
		break;
	case 'w':
	case 'W':
		cout << "West\n";
		break;
		// default : cout << "Kaha jaakar maanega\n";
	}

	return 0;
}
















