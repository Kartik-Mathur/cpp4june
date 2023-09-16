#include <iostream>
using namespace std;

template<typename T>
class Vector {
public:
	T *a;
	int s, cap;

	Vector(int n = 1) {
		a = new T[n];
		s = 0;
		cap = n;
	}

	void push_back(T data) {
		if (s == cap) {
			T *olda = a;
			int oldcap = cap;
			cap *= 2;
			a = new T[cap];
			for (int i = 0; i < oldcap; ++i)
			{
				a[i] = olda[i];
			}
			delete []olda;
		}
		a[s] = data;
		s++;
	}

	void pop_back() {
		if (s > 0) {
			s--;
		}
	}

	bool empty() {
		return s == 0;
	}

	int capacity() {
		return cap;
	}

	int size() {
		return s;
	}

	T operator[](int indx) {
		return a[indx];
	}
};

int main() {

	Vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	// v.pop_back();

	// v.push_back('A');
	// v.push_back('B');
	// v.push_back('C');
	// v.push_back('D');
	// v.push_back('E');
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	cout << "Size: " << v.size() << endl;
	cout << "Capacity: " << v.capacity() << endl;

	return 0;
}
















