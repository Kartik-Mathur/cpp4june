#include <iostream>
#include <list>
#include <set>
#include <unordered_map>
using namespace std;

class node {
public:
	node* left, *right;
	node() {

	}
};

int main() {
	int a[] = {2, 1, 3, 5};
	int n = sizeof(a) / sizeof(int);

	node* root = new node();



}

/*
class node {
public:
	char ch;
	unordered_map<char, node*> h;
	bool isWordEnd;
	node(char c) {
		ch = c;
		isWordEnd = false;
	}
};

class Tries {

public:
	node* root;
	Tries() {
		root = new node('\0');
	}

	void addWord(char *word) {
		node* temp = root;

		for (int i = 0; word[i] != '\0'; ++i)
		{
			char ch = word[i];
			if (temp->h.count(ch) == 0) {
				temp->h[ch] = new node(ch);
				temp = temp->h[ch];
			}
			else {
				temp = temp->h[ch];
			}
		}
		temp->isWordEnd = true;
	}

	bool searchWord(char* word) {
		node* temp = root;

		for (int i = 0; word[i] != '\0'; ++i)
		{
			char ch = word[i];
			if (temp->h.count(ch) == 0) {
				return false;
			}
			else {
				temp = temp->h[ch];
			}
		}
		return temp->isWordEnd;
	}

	void printAllWordsHelper(node*root, string &x) {
		if (root->isWordEnd) cout << x << endl;

		for (auto p : root->h) {
			x.push_back(p.first);
			printAllWordsHelper(p.second, x);
			x.pop_back();
		}
	}

	void printAllWords(char *word) {
		node* temp = root;
		for (int i = 0; word[i] != '\0'; ++i)
		{
			char ch = word[i];
			if (temp->h.count(ch) == 0) {
				return;
			}
			else {
				temp = temp->h[ch];
			}
		}

		string x(word);
		printAllWordsHelper(temp, x);
	}

};

int main() {
	Tries t;
	t.addWord("Hello");
	t.addWord("Hell");
	t.addWord("He");
	t.addWord("Hero");
	t.addWord("Max");

	t.printAllWords("Hel");
// while (1) {
// 	char word[1000];
// 	cin >> word;
// 	if (!t.searchWord(word)) cout << "Word Nahi hai\n";
// 	else cout << "Word hai\n";
// }
}
*/

/*
template<typename T>
class Graph {
public:
	unordered_map<T, list<pair<T, int> > > adj;

	void addEdge(T u, T v, int d, bool bidir = true) {
		adj[u].push_back({v, d});
		if (bidir) adj[v].push_back({u, d});
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << "-->";
			for (auto ch : p.second) {
				cout << "(" << ch.first << "," << ch.second << ") ";
			}
			cout << endl;
		}
	}

	void dijkstra(T src, T des) {
		set<pair<int, T> > s;
		s.insert({0, src});
		unordered_map<T, T> parent;
		unordered_map<T, int> distance;
		parent[src] = src;
		for (auto n : adj) {
			distance[n.first] = INT_MAX;
		}

		distance[src] = 0;

		while (!s.empty()) {
			auto f = *s.begin();
			T baap = f.second;
			int baap_dist = f.first;
			s.erase(s.begin());
			for (auto n : adj[baap]) {
				T ngh = n.first;
				int road_dist = n.second;

				if (distance[ngh] > baap_dist + road_dist) {
					auto x = s.find({distance[ngh], ngh});
					if (x != s.end()) s.erase(x);
					parent[ngh] = baap;
					distance[ngh] = baap_dist + road_dist;
					s.insert({distance[ngh], ngh});
				}
			}
		}


		for (auto p : distance) {
			cout << "Distance of " << p.first << " from " << src << " : "
			     << p.second << endl;
		}

		while (des != parent[des]) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des << endl;
	}

};

int main() {

	Graph<string> g;

	g.addEdge("Amritsar", "Agra", 1);
	g.addEdge("Amritsar", "Jaipur", 4);
	g.addEdge("Delhi", "Jaipur", 2);
	g.addEdge("Delhi", "Agra", 1);
	g.addEdge("Bhopal", "Agra", 2);
	g.addEdge("Bhopal", "Mumbai", 3);
	g.addEdge("Jaipur", "Mumbai", 8);

	g.print();

	g.dijkstra("Delhi", "Mumbai");


	return 0;
}
*/
















