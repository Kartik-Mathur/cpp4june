#include <iostream>
using namespace std;

int elephantWays(int n, int m) {
	int dp[100][100] = {0};
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			if (i == 0 and j == 0) dp[i][j] = 1;
			else {
				int ans = 0;
				for (int k = 0; k <= i - 1; ++k)
				{
					ans += dp[k][j];
				}

				for (int k = 0; k <= j - 1; ++k)
				{
					ans += dp[i][k];
				}

				dp[i][j] = ans;
			}
		}
	}

	return dp[n][m];
}

int main() {

	cout << elephantWays(3, 3) << endl;

	return 0;
}
















