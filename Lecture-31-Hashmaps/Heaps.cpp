#include <iostream>
#include <queue>
#include <functional>
using namespace std;

int main() {

	// priority_queue<int> q; // Maxheap
	// priority_queue<int, vector<int>, greater<int> > q; // Minheap
	priority_queue<int, vector<int>, less<int> > q; // Maxheap

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











