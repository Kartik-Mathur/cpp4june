#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

	unordered_map<string, int> h;
	// Hashmap ke andar we have to insert key,value ka pair
	h.insert("Mango", 100);

	h["Mango"] = 150; // Update
	h["Orange"] = 200;// Insert  krdega  orange

	cout << h["Orange"] << endl;
	h.print();
	return 0;
}
















