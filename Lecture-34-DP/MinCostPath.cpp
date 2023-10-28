#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void printLCS(string s1, string s2, int dp[][100], int n, int m, vector<char> &ans) {
	if (n == 0 and m == 0) {
		for (int i = ans.size() - 1; i >= 0; --i)
		{
			cout << ans[i];
		}
		cout << endl;
		return;
	}

	if (s1[n - 1] == s2[m - 1]) {
		ans.push_back(s1[n - 1]);
		printLCS(s1, s2, dp, n - 1, m - 1, ans);
		ans.pop_back();
	}
	else {
		if (dp[n - 1][m] == dp[n][m]) {
			printLCS(s1, s2, dp, n - 1, m, ans);
		}
		if (dp[n][m - 1] == dp[n][m]) {
			printLCS(s1, s2, dp, n, m - 1, ans);
		}
	}
}

int lcs(string s1, string s2, int n, int m, int dp[][10]) {
	// basecase
	if (n == 0 || m == 0) return dp[n][m] = 0;
	if (dp[n][m] != -1)return dp[n][m];

	// recursive case
	if (s1[n - 1] == s2[m - 1]) return dp[n][m] = 1 + lcs(s1, s2, n - 1, m - 1, dp);
	else {
		return dp[n][m] = max(lcs(s1, s2, n - 1, m, dp), lcs(s1, s2, n, m - 1, dp));
	}
}


int bottomUp(string s1, string s2) {
	int dp[100][100] = {0};
	int n = s1.size(), m = s2.size();

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (s1[i - 1] == s2[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	// for (int i = 0; i <= n; ++i)
	// {
	// 	for (int j = 0; j <= m; ++j)
	// 	{
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	vector<char> ans;
	printLCS(s1, s2, dp, n, m, ans);
	return dp[n][m];
}



int main() {

	string s1 = "abcdgef", s2 = "abcfe";
	int dp[10][10];
	memset(dp, -1, sizeof(dp));

	cout << lcs(s1, s2, s1.size(), s2.size(), dp) << endl;
	cout << bottomUp(s1, s2) << endl;
	return 0;
}
















