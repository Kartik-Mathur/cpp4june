#include <iostream>
using namespace std;

void printCelAndFar(int init, int fval, int step) {
	int far = init, cel;
	while (far <= fval) {
		cel = (5 / 9.0) * (far - 32);

		cout << far << " " << cel << endl;

		far = far + step;
	}

}

int main() {

	int init, fval, step;
	cin >> init >> fval >> step;

	printCelAndFar(init, fval, step);


	return 0;
}
















