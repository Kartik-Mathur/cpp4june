#include <iostream>
#include <vector>
using namespace std;

class Minheap {
	vector<int> v;
	void heapify(int i) {
		int mi = i;
		int left = 2 * i;
		int right = left + 1;
		if (left<v.size() and v[mi]>v[left]) {
			mi = left;
		}
		if (right<v.size()and v[mi]>v[right]) {
			mi = right;
		}
		if (mi != i) {
			swap(v[mi], v[i]);
			heapify(mi);
		}
	}
public:
	Minheap() {
		v.push_back(-1); // to ignore the 0th index
	}

	void push(int d) {
		v.push_back(d);
		int i = v.size() - 1;
		int p = i / 2;

		while (p > 0 and v[p] > v[i]) {
			swap(v[p], v[i]);
			i = p;
			p /= 2;
		}
	}

	void pop() {
		swap(v[1], v[v.size() - 1]);
		v.pop_back();
		heapify(1);
	}

	int top() {
		return v[1];
	}

	bool empty() {
		return v.size() == 1;
	}
};

int main() {

	Minheap h;

	h.push(10);
	h.push(2);
	h.push(1);
	h.push(0);
	h.push(5);
	h.push(6);

	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;

	return 0;
}
















