#include <iostream>
#include <unordered_map>
#include <list>
#include <set>
using namespace std;

class Graph{
public:
	unordered_map<string, list< pair<string, int> > > adj;

	void addEdge(string u, string v, int d, bool bidir = true){
		adj[u].push_back({v,d});
		if(bidir){
			adj[v].push_back({u,d});
		}
	}

	void print(){
		for(auto p: adj){
			cout << p.first << " -> ";
			for(auto chp: p.second){
				cout << "("<<chp.first <<", "<<chp.second <<") ";
			}
			cout << endl;
		}
	}

	void dijkstras(string src){
		unordered_map<string,int> dist;

		for(auto p: adj){
			dist[p.first] = INT_MAX;
		}

		dist[src] = 0;

		set< pair<int, string> > s;
		s.insert({0, src});

		while(!s.empty()){
			auto x = *(s.begin());

			s.erase(s.begin());

			int cd = x.first;
			string node = x.second;

			for(auto chp: adj[node]){
				string ch = chp.first;
				int ed = chp.second;

				if(cd + ed < dist[ch]){
					auto f = s.find({dist[ch], ch});
					if(f != s.end()){
						s.erase(f);
					}

					dist[ch] = cd + ed;
					s.insert({cd + ed, ch});
				}
			}
		}

		// Print all the distance
		for(auto p: dist){
			cout << "Distance of "<<src <<" from "<<p.first << " : "<<p.second<<endl;
		}
	}
};

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		
	Graph g;
	g.addEdge("A","B",1);
	g.addEdge("D","B",2);
	g.addEdge("D","C",3);
	g.addEdge("A","D",8);
	g.addEdge("A","C",10);

	// g.print();
	g.dijkstras("A");

	return 0;
}
















