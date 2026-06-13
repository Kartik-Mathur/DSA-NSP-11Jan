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

	void dfs_helper(string src, unordered_map<string, bool> &visited){
		cout << src << " ";
		visited[src] = true;

		for(auto child: adj[src]){
			if(!visited[child]){
				dfs_helper(child, visited);
			}
		}
	}

	void dfs(string src){
		unordered_map<string, bool> visited;

		dfs_helper(src, visited);
		int component = 1;

		for(auto p: adj){
			if(visited[p.first] == false){
				component ++;
				dfs_helper(p.first, visited);
			}
		}

		cout << "\nTotal Components: "<<component<<endl;
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
	
	g.addEdge("7","8");
	g.addEdge("7","9");
	

	g.dfs("A");

	return 0;
}
















