#include <iostream>
#include <list>
#include <queue>
#include <unordered_map>
using namespace std;

class Graph{
public:
	unordered_map<string, list<string> > adj;

	void addEdge(string u,string v,bool bidir=true){
		adj[u].push_back(v);
		if(bidir){
			adj[v].push_back(u);
		}
	}

	void print(){
		for (auto p: adj)
		{
			cout << p.first << " : ";
			for(auto neighbour: p.second){
				cout << neighbour << ", ";
			}
			cout << endl;
		}
	}

	void bfs(string src){
		unordered_map<string, bool> visited;

		queue<string> q;
		q.push(src);

		visited[src] = true;

		while(!q.empty()){
			string f = q.front();
			q.pop();
			cout << f << " ";

			for(auto children: adj[f]){
				if(!visited[children]){
					q.push(children);
					visited[children] = true;
				}
			}
		}
	}

	void sssp(string src, string des){
		unordered_map<string, bool> visited;
		unordered_map<string, string> parent;
		unordered_map<string, int> distance;

		queue<string> q;
		q.push(src);

		visited[src] = true;
		parent[src] = src;
		distance[src] = 0;

		while(!q.empty()){
			string f = q.front();
			q.pop();

			for(auto children: adj[f]){
				if(!visited[children]){
					q.push(children);
					visited[children] = true;
					distance[children] = distance[f] + 1;
					parent[children] = f;
				}
			}
		}

		// Print distances
		for(auto p: distance){
			cout << "Distance of "<<p.first <<" from "<<src
			<< " : "<< p.second << endl;
		}

		// Print path
		while(des != parent[des]){
			cout << des << " <-- ";
			des = parent[des];
		}
		cout << des << endl;
	}
};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif		

	Graph g;

	g.addEdge("A","B");
	g.addEdge("D","B");
	g.addEdge("A","C");
	g.addEdge("D","C");
	g.addEdge("E","C");
	g.addEdge("E","D");
	g.addEdge("E","F");

	g.bfs("A");
	cout << endl;
	g.sssp("A","F");

	return 0;
}
















