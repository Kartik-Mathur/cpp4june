#include <iostream>
using namespace std;

int main() {

	int init, fval, step, cel;
	cin >> init >> fval >> step;

	int far = init;

	while (far <= fval) {
		cel = (5 / 9.0) * (far - 32);

		cout << far << " " << cel << endl;

		far = far + step;
	}

	return 0;
}
















