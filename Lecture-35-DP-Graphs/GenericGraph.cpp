#include <iostream>
#include <queue>
#include <unordered_map>
#include <list>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) adj[v].push_back(u);
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << " : ";
			for (auto neighbour : p.second) {
				cout << neighbour << ", ";
			}
			cout << endl;
		}
	}

	void bfs(T src) {
		unordered_map<T, bool> visited;

		queue<T> q;
		q.push(src);
		visited[src] = true;

		while (!q.empty()) {
			T f = q.front();
			q.pop();
			cout << f << " ";
			for (auto ch : adj[f]) {
				if (!visited[ch]) {
					visited[ch] = true;
					q.push(ch);
				}
			}
		}
	}


	void SSSP(T src, T des) {

		unordered_map<T, bool> visited;
		unordered_map<T, T> parent;
		unordered_map<T, int> dist;

		queue<T> q;
		q.push(src);
		visited[src] = true;
		parent[src] = src;
		dist[src] = 0;

		while (!q.empty()) {
			T f = q.front();
			q.pop();

			for (auto ch : adj[f]) {
				if (!visited[ch]) {
					visited[ch] = true;
					dist[ch] = dist[f] + 1;
					parent[ch] = f;
					q.push(ch);
				}
			}
		}

		cout << "Distance from " << src << " to " << des << " : " << dist[des] << endl;

		while (des != src) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des << endl;
	}

	void dfsHelper(T src, unordered_map<T, bool> &visited) {
		visited[src] = true;
		cout << src << " ";
		for (auto ch : adj[src]) {
			if (!visited[ch]) dfsHelper(ch, visited);
		}
	}

	void dfs(T src) {
		unordered_map<T, bool> visited;
		int components = 1;
		dfsHelper(src, visited);

		for (auto p : adj) {
			if (!visited[p.first]) {
				dfsHelper(p.first, visited);
				components++;
			}
		}
		cout << endl << "components: " << components << endl;
	}

};



int main() {

	Graph<string> g;
	g.addEdge("A", "B");
	g.addEdge("C", "B");
	g.addEdge("C", "E");
	g.addEdge("A", "E");
	g.addEdge("D", "E");
	g.addEdge("D", "C");
	g.addEdge("D", "F");

	g.addEdge("X", "Y");
	g.addEdge("X", "Z");
	g.addEdge("T", "Z");

	g.dfs("A");

	// int board[50] = {0};
	// board[2] = 13;
	// board[5] = 2;
	// board[9] = 18;
	// board[18] = 11;
	// board[17] = -13;
	// board[20] = -14;
	// board[24] = -8;
	// board[25] = -10;
	// board[32] = -2;
	// board[34] = -22;

	// for (int u = 1; u <= 36; ++u)
	// {
	// 	for (int dice = 1; dice <= 6; ++dice)
	// 	{
	// 		int v = u + dice + board[u + dice];
	// 		g.addEdge(u, v, false);
	// 	}
	// }

	// g.SSSP(1, 36);



	// g.bfs("A");
	cout << endl;
	// g.SSSP("A", "F");
	// g.print();


	return 0;
}
















