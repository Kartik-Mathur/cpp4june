#include <iostream>
using namespace std;

int editDistance(string s1, string s2, int n, int m) {
	if (n == 0) return m;
	if (m == 0) return n;

	// recursive case
	if (s1[n - 1] == s2[m - 1]) {
		return editDistance(s1, s2, n - 1, m - 1);
	}
	else {
		int op1 = editDistance(s1, s2, n, m - 1); // Insertion
		int op2 = editDistance(s1, s2, n - 1, m); // Deletion
		int op3 = editDistance(s1, s2, n - 1, m - 1); // Updation
		return 1 + min(op1, min(op2, op3));
	}
}

int topDown(string s1, string s2, int n, int m, int dp[10][100]) {
	if (n == 0) return dp[n][m] = m;
	if (m == 0) return dp[n][m] = n;

	if (dp[n][m] != -1) return dp[n][m];

	// recursive case
	if (s1[n - 1] == s2[m - 1]) {
		return dp[n][m] = topDown(s1, s2, n - 1, m - 1, dp);
	}
	else {
		int op1 = topDown(s1, s2, n, m - 1, dp); // Insertion
		int op2 = topDown(s1, s2, n - 1, m, dp); // Deletion
		int op3 = topDown(s1, s2, n - 1, m - 1, dp); // Updation
		return dp[n][m] = 1 + min(op1, min(op2, op3));
	}
}

int bottomUp(string s1, string s2) {
	int dp[100][100] = {0};
	int n = s1.size(), m = s2.size();

	for (int k = 1; k <= m; ++k)
	{
		dp[0][k] = k;
	}

	for (int k = 1; k <= n; ++k)
	{
		dp[k][0] = k;
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1];
			else dp[i][j] = 1 + min(dp[i - 1][j],
				                        min(dp[i - 1][j - 1], dp[i][j - 1]));
		}
	}


	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[n][m];
}

int main() {

	string s1 = "sunday", s2 = "saturday";
	cout << editDistance(s1, s2, s1.size(), s2.size()) << endl;

	int dp[10][100];
	memset(dp, -1, sizeof dp);

	cout << topDown(s1, s2, s1.size(), s2.size(), dp) << endl;
	cout << bottomUp(s1, s2) << endl;
	return 0;
}
















