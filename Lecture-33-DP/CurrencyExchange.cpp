#include <iostream>
#include <vector>
using namespace std;

int minCoins(int amt, int *deno, int n) {
	// base case
	if (amt == 0) {
		return 0;
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if (amt >= deno[i]) {
			int chotiAmt = amt - deno[i];
			int chotaAns = minCoins(chotiAmt, deno, n);
			if (chotaAns != INT_MAX) {
				ans = min(chotaAns + 1, ans);
			}
		}
	}
	return ans;
}

int topDown(int amt, int *deno, int n, int *dp) {
	// base case
	if (amt == 0) return dp[amt] = 0;

	if ( dp[amt] != -1) return  dp[amt];

	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if (amt >= deno[i]) {
			int chotiAmt = amt - deno[i];
			int chotaAns = topDown(chotiAmt, deno, n, dp);
			if (chotaAns != INT_MAX) {
				ans = min(chotaAns + 1, ans);
			}
		}
	}
	return  dp[amt] = ans;
}



int bottomUp(int amt, int *deno, int n) {
	vector<int> dp(amt + 1, INT_MAX);

	dp[0] = 0;

	for (int rupay = 1; rupay <= amt; ++rupay)
	{

		// rupay: min(dp[rupay-1],dp[rupay-5],dp[rupay-10])+1;
		for (int i = 0; i < n; ++i)
		{
			int kamRupay =  rupay - deno[i];
			if (kamRupay >= 0) {
				if (dp[kamRupay] != INT_MAX) {
					dp[rupay] = min(dp[rupay], dp[kamRupay] + 1);
				}
			}
		}
	}

	return dp[amt];
}

int main() {

	int deno[] = {1, 7, 10};
	int dp[10000];

	for (int i = 0; i < 10000; ++i) dp[i] = -1;

	cout << topDown(9000, deno, 3, dp) << endl;
	cout << bottomUp(9000, deno, 3) << endl;
	cout << minCoins(9000, deno, 3) << endl;

	return 0;
}
















