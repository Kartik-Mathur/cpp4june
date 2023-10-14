#include <iostream>
using namespace std;

class node {
public:
	string key;
	int val;
	node* next;
	node(string x, int k) {
		key = x;
		val = k;
		next = NULL;
	}
};

class hashmap {
	node **a;
	int cs;
	int ts;

	int hashFunction(string key) {
		int ans = 0;
		int mul = 1;

		for (int i = 0; i < key.size(); ++i)
		{
			ans =  ans % ts + (key[i] % ts) * (mul % ts);
			ans %= ts;
			mul *= 37;
			mul %= ts;
		}
		ans %= ts;
		return ans;
	}

	void rehash() {
		node** olda = a;
		int oldts = ts;

		ts *= 2;
		a = new node*[ts];
		cs = 0;
		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL;
		}

		// Inserting the olda values in a
		for (int i = 0; i < oldts; ++i)
		{
			node* head = olda[i];
			while (head != NULL) {
				insert(head->key, head->val);
				head = head->next;
			}
		}

		delete [] olda;
	}

public:

	hashmap(int s = 7) {
		a = new node*[s];
		cs = 0;
		ts = s;
		for (int i = 0; i < s; ++i)
		{
			a[i] = NULL;
		}
	}

	void insert(string key, int val) {
		int hashIndex = hashFunction(key);

		cs++;
		node* n = new node(key, val);
		n->next = a[hashIndex];
		a[hashIndex] = n;

		float loadFactor = cs / ts * 1.0;
		if (loadFactor > 0.5) {
			rehash();
		}
	}

	void print() {
		for (int i = 0; i < ts; ++i)
		{
			cout << i << " --> ";
			node* head = a[i];
			while (head != NULL) {
				cout << "(" << head->key << ", " << head->val << ") ";
				head = head->next;
			}
			cout << endl;
		}
	}


};

int main() {

	hashmap h;

	h.insert("Mango", 100);
	h.insert("Pineapple", 50);
	h.insert("Kiwi", 150);
	h.insert("Banana", 60);
	h.insert("Papaya", 70);
	h.insert("Apple", 170);
	h.insert("Grapes", 80);

	h.print();


	return 0;
}
















