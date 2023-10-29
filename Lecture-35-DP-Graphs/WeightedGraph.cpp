#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

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

};

int main() {

	Graph<string> g;

	g.addEdge("Amritsar", "Delhi", 1);
	g.addEdge("Amritsar", "Jaipur", 4);
	g.addEdge("Delhi", "Jaipur", 2);
	g.addEdge("Delhi", "Agra", 1);
	g.addEdge("Bhopal", "Agra", 2);
	g.addEdge("Bhopal", "Mumbai", 3);
	g.addEdge("Jaipur", "Mumbai", 8);

	g.print();


	return 0;
}
















