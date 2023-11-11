#include <iostream>
#include <list>
#include <set>
#include <unordered_map>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = false) {
		adj[u].push_back(v);
		if (bidir) adj[v].push_back(u);
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << "--> ";
			for (auto ch : p.second) {
				cout << ch << ", ";
			}
			cout << endl;
		}
	}

	void tps_dfs(T src, unordered_map<T, bool> &visited, list<T> &l) {
		visited[src] = true;
		for (auto ch : adj[src]) {
			if (!visited[ch])
				tps_dfs(ch, visited, l);
		}

		l.push_front(src);
	}

	void topologicalSort() {
		/*
		unordered_map<string, int> indegree;
		for (auto p : adj) {
			for (auto ch : p.second) {
				if (indegree.count(ch) == 0) indegree[ch] = 1;
				else indegree[ch]++;
			}
		}

		list<T> l;

		unordered_map<T, bool> visited;
		for (auto p : adj) {
			if (indegree.count(p.first) == 0) {
				cout << p.first << ", ";
				if (!visited[p.first])
					tps_dfs(p.first, visited, l);
			}
		}
		cout << endl;
		*/

		list<T> l;

		unordered_map<T, bool> visited;
		for (auto p : adj) {
			if (!visited[p.first])
				tps_dfs(p.first, visited, l);
		}

		for (auto el : l) {
			cout << el << " ";
		}
		cout << endl;
	}


};

int main() {

	Graph<string> g;

	g.addEdge("Logic", "DSA");
	g.addEdge("C++", "DSA");
	g.addEdge("HTML", "Web");
	g.addEdge("Problem Solving", "CP");
	g.addEdge("DSA", "Web");
	g.addEdge("DSA", "CP");
	g.addEdge("CP", "Hackathon");
	g.addEdge("Web", "Hackathon");

	g.print();

	// Let's Calculate Indegree first
	g.topologicalSort();



	return 0;
}
















