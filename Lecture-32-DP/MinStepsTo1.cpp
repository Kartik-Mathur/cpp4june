#include <iostream>
using namespace std;

int minSteps(int n, int*dp) {
	// base case
	if (n == 1) {
		return dp[n] = 0;
	}

	if (dp[n] != -1) return dp[n];

	// recursive case
	int op1, op2, op3;
	op1 = op2 = op3 = INT_MAX;

	if (n % 3 == 0) op1 = minSteps(n / 3, dp);
	if (n % 2 == 0) op2 = minSteps(n / 2, dp);
	op3 = minSteps(n - 1, dp);

	return dp[n] = min(op1, min(op2, op3)) + 1;
}

int bottomUp(int n) {
	int dp[1000];

	dp[1] = 0;
	for (int i = 2; i <= n; ++i)
	{
		int op1, op2, op3;
		op1 = op2 = op3 = INT_MAX;
		if (i % 3 == 0) op1 = dp[i / 3];
		if (i % 2 == 0) op2 = dp[i / 2];
		op3 = dp[i - 1];

		dp[i] = min(op1, min(op2, op3)) + 1;
	}

	return dp[n];
}

int main() {


	int dp[10000];
	for (int i = 0; i < 10000; ++i)
	{
		dp[i] = -1;
	}

	cout << minSteps(1000, dp) << endl;
	cout << bottomUp(1000) << endl;

	return 0;
}
















