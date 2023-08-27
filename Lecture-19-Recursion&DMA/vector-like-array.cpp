#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n, 10);
	// vector<int> v(n, 0);

	// for (int i = 0; i < n; ++i)
	// {
	// 	a[i] = i + 1;
	// }

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;


	return 0;
}
















