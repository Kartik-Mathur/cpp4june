#include <iostream>
#include <queue>
using namespace std;

class cmp {
public:
	bool operator()(int a, int b) {
		return a < b;
	}
};

int main() {

	// priority_queue<type, vector<type>, class:cmp> q;
	priority_queue<int, vector<int>, cmp> q;

	q.push(1);
	q.push(10);
	q.push(2);
	q.push(5);
	q.push(4);
	q.push(3);

	while (!q.empty()) {
		cout << q.top() << " ";
		q.pop();
	}
	cout << endl;

	return 0;
}
















