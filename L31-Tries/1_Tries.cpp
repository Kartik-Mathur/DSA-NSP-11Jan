#include <iostream>
#include <map>
using namespace std;

class node{
public:
	char ch;
	map<char, node*> h;
	bool isEnd;

	node(char c){
		ch = c;
		isEnd = false;
	}
};

class Tries{
public:
	node* root;
	Tries(){
		root = new node('\0');
	}

	void addWord(string s){
		node* temp = root;
		for (int i = 0; i < s.size(); ++i)
		{
			char ch = s[i];
			if(temp->h.count(ch) == 0) {
				node* n = new node(ch);
				temp -> h[ch] = n;
			}

			temp = temp->h[ch];
		}

		temp->isEnd = true;
	}

	bool checkWord(string s){
		node* temp = root;
		for (int i = 0; i < s.size(); ++i)
		{
			char ch = s[i];
			if(temp->h.count(ch) == 0) {
				return false;
			}

			temp = temp->h[ch];
		}

		return temp->isEnd;
	}

	void autoFillHelper(node* temp, string s){
		if(temp -> isEnd == true){
			cout << s << endl;
		}

		for(auto p: temp->h){
			autoFillHelper(p.second, s + p.first);
		}
	}

	void autoFill(string s){
		node* temp = root;
		for (int i = 0; i < s.size(); ++i)
		{
			char ch = s[i];
			if(temp->h.count(ch) == 0) {
				return;
			}

			temp = temp->h[ch];
		}

		autoFillHelper(temp, s);

	}
};

int main(){

	Tries t;
	t.addWord("Hello");
	t.addWord("Her");
	t.addWord("He");
	t.addWord("Code");
	t.addWord("Coder");

	t.autoFill("H");

	// while(true){

	// 	string x; cin>>x;
	// 	if(t.checkWord(x)) cout << "Yes\n";
	// 	else cout << "No\n";
	// }


	return 0;
}
















