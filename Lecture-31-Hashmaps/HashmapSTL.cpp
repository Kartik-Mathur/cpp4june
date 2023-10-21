#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main() {

	unordered_map<string, int> h;
	// map<string, int> h;
	// Hashmap ke andar we have to insert key,value ka pair
	h.insert({"Mango", 100});
	h.insert(make_pair("Apple", 150));
	h.insert(make_pair("Pineapple", 80));
	h.insert(make_pair("Kiwi", 180));
	h.insert(make_pair("Guava", 180));

	h["Mango"] = 150; // Update
	h["Orange"] = 200;// Insert  krdega  orange

	cout << h["Orange"] << endl;


	// auto x = 10.11;
	// cout << x << endl;

	for (auto p : h) {
		cout << p.first << ", " << p.second << endl;
	}
	// for (pair<string, int> p : h) {
	// 	cout << p.first << ", " << p.second << endl;
	// }

	/* This only works on unordered map */
	for (int i = 0; i < h.bucket_count(); ++i) {
		cout << i << "--> ";
		for (auto it = h.begin(i); it != h.end(i); ++it) {
			cout << "[" << it->first << ":" << it->second << "] ";
		}
		cout << "\n";
	}
	return 0;
}
















