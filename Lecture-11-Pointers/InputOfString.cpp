#include <iostream>
using namespace std;

int main() {

	char a[1000];
	// cin >> a;
	// Delimiter: Kis. character tak input lena hai,
	// agar delimiter mei kch pass nhi kia toh by default '\n' hota h
	// cin.getline(arrayName, numberOfCharacters, delimiter);
	// cin.getline(a, 1000);
	cin.getline(a, 100, '$');

	cout << a << endl;


	return 0;
}
















