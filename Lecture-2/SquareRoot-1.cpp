#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	float ans = 0;
	float inc = 1;

	int current_precision = 1;
	while (current_precision <= 4) {

		while (ans * ans <= n) {

			ans = ans + inc;
		}
		ans = ans - inc;
		// cout << "For cp: " << current_precision << " ans : " << ans << endl;
		inc = inc / 10;
		current_precision = current_precision + 1;
	}
	cout << ans << endl;

	return 0;
}
















