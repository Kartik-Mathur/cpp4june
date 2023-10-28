#include <iostream>
#include <cstring>
using namespace std;

int knapsack(int* price, int *weights, int n, int capacity, int dp[][100]) {
	if (n == 0 || capacity == 0) return dp[n][capacity] = 0;

	if (dp[n][capacity] != -1) return dp[n][capacity] ;

	int op1 = INT_MIN, op2 = INT_MIN;

	if (weights[n - 1] <= capacity)
		op1  = price[n - 1] +
		       knapsack(price, weights, n - 1, capacity - weights[n - 1], dp);
	op2 = knapsack(price, weights, n - 1, capacity, dp);

	return dp[n][capacity] = max(op1, op2);
}

int bottomUp(int *price, int *weights, int N, int capacity) {

	int dp[10][10] = {0};

	for (int n = 1; n <= N; ++n)
	{
		for (int c = 1; c <= capacity; ++c)
		{
			int op1 = 0, op2 = 0;
			if (weights[n - 1] <= c) {
				op1 = price[n - 1] + dp[n - 1][c - weights[n - 1]];
			}
			op2 = dp[n - 1][c];
			dp[n][c] = max(op1, op2);
		}
	}

	return dp[N][capacity];
}

int main() {

	int price[] = {7, 4, 4};
	int weights[] = {3, 2, 2};
	int n = sizeof(price) / sizeof(int);
	int capacity = 4;
	int dp[100][100];
	memset(dp, -1, sizeof dp);

	cout << knapsack(price, weights, n, capacity, dp) << endl;
	cout << bottomUp(price, weights, n, capacity) << endl;



	return 0;
}
















