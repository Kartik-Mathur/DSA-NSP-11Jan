#include <iostream>
#include <list>
#include <queue>
#include <unordered_map>
using namespace std;

template<typename T>
class Graph{
public:
	unordered_map<T, list<T> > adj;

	void addEdge(T u,T v,bool bidir=true){
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

	void bfs(T src){
		unordered_map<T, bool> visited;

		queue<T> q;
		q.push(src);

		visited[src] = true;

		while(!q.empty()){
			T f = q.front();
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

	void sssp(T src, T des){
		unordered_map<T, bool> visited;
		unordered_map<T, T> parent;
		unordered_map<T, int> distance;

		queue<T> q;
		q.push(src);

		visited[src] = true;
		parent[src] = src;
		distance[src] = 0;

		while(!q.empty()){
			T f = q.front();
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


		cout << "Min Moves : "<<distance[des]<<endl;
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

	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17]=-13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	Graph<int> g;

	for (int u = 0; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice;
			v += board[v];
			g.addEdge(u,v,false);
		}
	}

	g.sssp(0,36);




	return 0;
}
















