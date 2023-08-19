#include <iostream>
using namespace std;

bool ratInMaze(char maze[][5], int sol[][10], int i, int j, int n, int m) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}

	// recursive case
	// Jispar khade ho maanlo wha solution hai
	sol[i][j] = 1;

	//  Pehle right jaakar dekho, mill gaya toh theek hai
	if (j + 1 < m and maze[i][j + 1] != 'X') {
		bool kyaRightSeBaatBani = ratInMaze(maze, sol, i, j + 1, n, m);
		if (kyaRightSeBaatBani == true) {
			return true;
		}
	}

	// Phr neeche jaakar dekho, mill gaya toh theek hai
	if (i + 1 < n and maze[i + 1][j] != 'X') {
		bool kyaNeecheSeBaatBani = ratInMaze(maze, sol, i + 1, j, n, m);
		if (kyaNeecheSeBaatBani == true) {
			return true;
		}
	}

	// Na right se milla rasta na neeche se milla rasta, toh answer possible nhi hai
	sol[i][j] = 0;
	return false;
}


int main() {

	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};

	int sol[10][10] = {0};

	ratInMaze(maze, sol, 0, 0, 4, 4);


	return 0;
}
















