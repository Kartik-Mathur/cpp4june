#include <iostream>
using namespace std;

int main() {

	char ch;
	ch = cin.get();
	int x = 0, y = 0;
	while (ch != '\n') {
		if (ch == 'N') {
			y++;
		}
		else if (ch == 'S') {
			y--;
		}
		else if (ch == 'E') {
			x++;
		}
		else {
			x--;
		}

		ch = cin.get();
	}

	// N, S, E, W
	// E -- > N -- > S -- > W
	// When x>=0, We should print x times E
	if (x >= 0) {
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}
	}
	// When y>=0, We should print y times N
	if (y >= 0) {
		for (int i = 0; i < y; ++i)
		{
			cout << 'N';
		}
	}

	// When y<=0, We should print |y| times S
	if (y <= 0) {
		y *= -1;
		for (int i = 0; i < y; ++i)
		{
			cout << 'S';
		}
	}

	// When x<=0, We should print |x| times W
	if (x <= 0) {
		x *= -1;
		for (int i = 0; i < x; ++i)
		{
			cout << 'W';
		}
	}

	return 0;
}


















// int main() {

// 	char ch;
// 	ch = cin.get();
// 	int x = 0, y = 0;
// 	while (ch != '\n') {
// 		if (ch == 'N') {
// 			y++;
// 		}
// 		else if (ch == 'S') {
// 			y--;
// 		}
// 		else if (ch == 'E') {
// 			x++;
// 		}
// 		else {
// 			x--;
// 		}

// 		ch = cin.get();
// 	}

// 	if (x >= 0 and y >= 0) {
// 		// 1st Quadrant
// 		// Print x times E
// 		for (int i = 0; i < x; ++i)
// 		{
// 			cout << 'E';
// 		}
// 		// Print y times N
// 		for (int i = 0; i < y; ++i)
// 		{
// 			cout << 'N';
// 		}
// 	}
// 	else if (x <= 0 and y >= 0) {
// 		// 2nd Quadrant
// 		// Print y times N
// 		for (int i = 0; i < y; ++i)
// 		{
// 			cout << 'N';
// 		}
// 		// Print |x| times W
// 		x *= -1;
// 		for (int i = 0; i < x; ++i)
// 		{
// 			cout << 'W';
// 		}
// 	}
// 	else if (x <= 0 and y <= 0) {
// 		// 3rd Quadrant
// 		// Print |y| times S
// 		y *= -1;
// 		for (int i = 0; i < y; ++i)
// 		{
// 			cout << 'S';
// 		}
// 		// Print |x| times W
// 		x *= -1;
// 		for (int i = 0; i < x; ++i)
// 		{
// 			cout << 'W';
// 		}

// 	}
// 	else {
// 		// 4th Quadrant
// 		// Print x times E
// 		for (int i = 0; i < x; ++i)
// 		{
// 			cout << 'E';
// 		}
// 		// Print |y| times S
// 		y *= -1;
// 		for (int i = 0; i < y; ++i)
// 		{
// 			cout << 'S';
// 		}
// 	}

// 	return 0;
// }
















