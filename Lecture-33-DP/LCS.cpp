#include <iostream>
#include <cstring>
using namespace std;

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

int main() {

	string s1 = "abcde", s2 = "abdce";
	int dp[10][10];
	memset(dp, -1, sizeof(dp));

	cout << lcs(s1, s2, s1.size(), s2.size(), dp) << endl;
	return 0;
}
















