#include <iostream>
using namespace std;

int wineProblem(int *wine, int day, int l, int r) {
	if (l > r) return 0;

	int op1 = wine[l] * day + wineProblem(wine, day + 1, l + 1, r);
	int op2 = wine[r] * day + wineProblem(wine, day + 1, l, r - 1);
	return max(op1, op2);
}

int topDown(int *wine, int day, int l, int r, int dp[][100]) {
	if (l > r) return dp[l][r] = 0;
	if (dp[l][r] != -1)return dp[l][r];

	int op1 = wine[l] * day + topDown(wine, day + 1, l + 1, r, dp);
	int op2 = wine[r] * day + topDown(wine, day + 1, l, r - 1, dp);
	return dp[l][r] = max(op1, op2);
}

int bottomUp(int *wine, int n) {
	int dp[100][100] = {0};

	for (int l = n - 1; l >= 0; --l)
	{
		for (int r = l; r < n; ++r)
		{
			int day = n - (r - l);

			int op1 = wine[l] * day + ((l + 1 < n) ? dp[l + 1][r] : 0);
			int op2 = wine[r] * day + ((r - 1 >= 0) ? dp[l][r - 1] : 0);
			dp[l][r] = max(op1, op2);
		}
	}

	for (int l = 0; l < n; ++l)
	{
		for (int r = 0; r < n; ++r)
		{
			cout << dp[l][r] << " ";
		}
		cout << endl;
	}
	return dp[0][n - 1];
}

int main() {

	int wine[] = {2, 3, 5, 1, 4};
	int n = sizeof(wine) / sizeof(int);

	int dp[10][100];
	for (int i = 0; i < 10; ++i)
		for (int j = 0; j < 100; ++j)
			dp[i][j] = -1;

	cout << topDown(wine, 1, 0, n - 1, dp) << endl;
	cout << bottomUp(wine, n) << endl;
	cout << wineProblem(wine, 1, 0, n - 1) << endl;

	return 0;
}
















