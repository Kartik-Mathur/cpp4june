#include <iostream>
using namespace std;

// template<typename T, typename U>
// class Pair {
// public:
// 	T first;
// 	U second;
// };

int main() {

	// pair<int, string> p;
	// Insertion ka way one
	// p.first = 10;
	// p.second = "Hello";

	// Insertion ka second way
	// pair<int, string> p(10, "Hello");

	// Insertion ka third way
	// pair<int, string> p(make_pair(10, "Hello"));

	// Insertion ka Fourth way
	// pair<int, string> p({10, "Hello"});

	// Insertion ka Fifth way
	pair<int, string> p;
	// p = make_pair(10, "Hello");
	p = {10, "Hello"};



	cout << p.first << ", " << p.second << endl;




	return 0;
}
















