#include <iostream>
#include <vector>
using namespace std;

void findLIS(int *a, vector<int> &lis, vector<int> &v, int len, int indx) {
	// base case
	if (len == 0) {
		for (int i = v.size() - 1; i >= 0; --i)
		{
			cout << v[i] << " ";
		}
		cout << endl;
		return;
	}

	// recursive case
	if (v.size() == 0) {
		v.push_back(a[indx]);
		findLIS(a, lis, v, len - 1, indx - 1);
	}
	else {
		if (v[v.size() - 1] > a[indx] and lis[indx] == len) {
			v.push_back(a[indx]);
			findLIS(a, lis, v, len - 1, indx - 1);
		}
		else {
			findLIS(a, lis, v, len, indx - 1);
		}
	}
}

void findLISAll(int *a, vector<int> &lis, vector<int> &v, int len, int indx) {
	// base case
	if (len == 0) {
		for (int i = v.size() - 1; i >= 0; --i)
		{
			cout << v[i] << " ";
		}
		cout << endl;
		return;
	}
	if (indx < 0 || len < 0) {
		return;
	}

	// recursive case
	if (v.size() == 0) {
		v.push_back(a[indx]);
		findLISAll(a, lis, v, len - 1, indx - 1);
		v.pop_back();
	}
	else {
		if (v[v.size() - 1] > a[indx] and lis[indx] == len) {
			v.push_back(a[indx]);
			findLISAll(a, lis, v, len - 1, indx - 1);
			v.pop_back();
		}

		findLISAll(a, lis, v, len, indx - 1);
	}
}

int main() {
	int a[] = {10, 9, 3, 5, 4, 11, 7, 18};
	int n = sizeof(a) / sizeof(int);

	vector<int> ans(n + 1, 1);

	for (int i = 1; i < n; ++i)
	{
		for (int j = i - 1; j >= 0; --j)
		{
			if (a[i] > a[j]) {
				ans[i] = max(ans[i], ans[j] + 1);
			}
		}
	}

	int val = 0, indx = -1;

	for (int i = 0; i < n; ++i)
	{
		cout << ans[i] << " ";
		if (ans[i] > val) {
			val = ans[i];
			indx = i;
		}
	}
	cout << endl;

	cout << "LIS: " << val << endl;
	cout << "LIS Indx: " << indx << endl;

	vector<int> v;
	findLISAll(a, ans, v, val, indx);

	return 0;
}
















