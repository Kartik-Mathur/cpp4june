#include <iostream>
using namespace std;

int main() {

	char ch;
	ch = cin.get(); // replace cin>>ch with this to read white space
	int cnt = 0;
	while (ch != '$') {

		// cout << ch << endl;
		cnt++;
		ch = cin.get();
	}
	cout << "Number of characters: " << cnt << endl;

	return 0;
}
















