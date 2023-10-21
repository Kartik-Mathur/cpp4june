#include <iostream>
using namespace std;

int fibo(int n) {
	// base case
	if (n <= 1) {
		return n;
	}

	// recursive case
	return fibo(n - 1) + fibo(n - 2);
}

int topDown(int n, int *dp) {
	// base case
	if (n <= 1) return dp[n] = n;

	if (dp[n] != -1) return dp[n];

	// recursive case
	return dp[n] = topDown(n - 1, dp) + topDown(n - 2, dp);
}

int bottomUp(int n) {
	int dp[1000];
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}

int main() {

	int n;
	cin >> n;
	int dp[10000];
	for (int i = 0; i < 10000; ++i)
	{
		dp[i] = -1;
	}
	cout << topDown(n, dp) << endl;
	cout << bottomUp(n) << endl;
	cout << fibo(n) << endl;

	return 0;
}
















