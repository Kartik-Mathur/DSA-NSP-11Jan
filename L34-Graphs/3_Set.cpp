#include <iostream>
#include <set>
using namespace std;

class compare{
public:
	bool operator()(const pair<string, int> &p1,const pair<string, int> &p2){
		if(p1.first != p2.first){
			return p1.second < p2.second;
		}
		return p1.first < p2.first;
	}
};


int main(){	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif		
	// duplicates are not allowed
	// set<int> s;

	// s.insert(1);
	// s.insert(1);
	// s.insert(1);
	// s.insert(3);
	// s.insert(2);
	// s.insert(4);
	// s.insert(5);

	// for(auto e: s){
	// 	cout << e << " ";
	// }
	// cout << endl;
	// set<pair<int, string> > s1;
	set< pair<string, int>, compare > s1;

	s1.insert({"Aditya", 100});
	s1.insert({"Karan", 90});
	s1.insert({"Samyak", 90});
	s1.insert({"Pooja", 70});

	// Set mei updation allowed nhi hota
	// Set mei updation ke liye delete the data and insert again

	// s1.insert({100, "Aditya"});
	// s1.insert({90, "Karan"});
	// s1.insert({90, "Karan"});
	// s1.insert({90, "Karan"});
	// s1.insert({90, "Karan"});
	// s1.insert({90, "Samyak"});
	// s1.insert({120, "Pooja"});

	while(!s1.empty()){
		auto p = *(s1.begin());

		cout << p.first << ", "<<p.second<<endl;

		s1.erase(s1.begin());
	}



	return 0;
}
















