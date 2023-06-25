#include <iostream>
using namespace std;

int main() {

	int n, no;
	cin >> n;

	int ans = 0;

	int i = 1;
	while (i <= n) {
		cin >> no;

		ans = ans ^ no;

		i++;
	}

	cout << ans << endl;


	return 0;
}
















