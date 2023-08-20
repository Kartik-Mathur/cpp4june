#include <iostream>
using namespace std;

bool kyaSafeHai(int board[][100], int i, int j, int n) {
	// current col j mei queen check karo, nahi honi chahiye
	for (int r = 0; r < i; ++r)
	{
		if (board[r][j] == 1) {
			return false;
		}
	}

	// Check karo right diagonal
	int copy_i = i, copy_j = j; // Copy banai taaki i,j kho na jaaye

	while (i >= 0 and j < n) {
		if (board[i][j] == 1) {
			return false;
		}

		i--;
		j++;
	}

	// Check karo left diagonal
	i = copy_i; j =  copy_j;
	while (i >= 0 and j >= 0) {
		if (board[i--][j--] == 1) {
			return false;
		}
	}

	// Agar upar mei  kahi queen nhi hai, that means location is safe
	return true;
}


bool nQueen(int board[][100], int i, int n) {
	// base case
	if (i == n) {
		// Print the board jismei queen kaha kaha rakhi hai stored hai
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				// cout << board[i][j] << " ";
				board[i][j] == 1 ? cout << "Q " : cout << "_ ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}
	// recursive case
	for (int j = 0; j < n; ++j)
	{
		if (kyaSafeHai(board, i, j, n) == true) {
			// Agar current ith row ka jth col safe hai for queen toh rakhdo
			board[i][j] = 1;
			// Ab ek queen rakhdi, ab n-1 recursion ko bolo rakh kar bata
			bool baakiHuiPlace = nQueen(board, i + 1, n);
			if (baakiHuiPlace == true) { // Agar baaki place ho gai toh ban gai baat
				return true;
			}

			// agar baaki place nhi ho paai, toh jo queen rakhi thi, vo galat hai
			// usse hatao  wha se
			board[i][j] = 0; // Backtracking
		}
	}

	return false;	// Agar  ith row ke kisi bhi column par queen place nhi ho paai

}

int main() {

	int board[100][100] = {0};

	int  n;
	cin >> n;

	nQueen(board, 0, n);


	return 0;
}
















