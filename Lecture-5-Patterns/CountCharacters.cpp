#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;
	int cnt = 0;
	while (ch != '$') {

		cout << ch << endl;
		cnt++;
		cin >> ch;
	}
	cout << "Number of characters: " << cnt << endl;
	// int n;
	// cin >> n;

	// cout << n << endl;
	// cout << n + 10 << endl;

	return 0;
}
















