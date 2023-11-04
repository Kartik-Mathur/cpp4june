#include <iostream>
#include <set>
using namespace std;

int main() {

	// set<int> s; // Duplicate data isn't allowed,
	// and we get data in sorted format
	// s.insert(4);
	// s.insert(3);
	// s.insert(2);
	// s.insert(0);

	set<pair<int, char> > s;
	s.insert({1, 'A'});
	s.insert({0, 'B'});
	s.insert({4, 'D'});
	s.insert({3, 'C'});
	// set mei deletion krke dobara insert krna is updation
	auto f  = s.find({3, 'C'});
	s.erase(f);

	s.insert({5, 'C'});

	while (!s.empty()) {
		auto f = (*s.begin());
		cout << "(" << f.first << "," << f.second << ")";
		s.erase(s.begin());
	} cout << endl;



	return 0;
}
















