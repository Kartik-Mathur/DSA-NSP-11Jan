#include <iostream>
using namespace std;

class node{
public:
	string key;
	int value;
	node* next;
	node(string k,int v){
		key	 = k;
		value = v;
		next = NULL;
	}
};

class Hashmap{

	int hashFunction(string key){
		int ans = 0;
		int mul = 1;
		for (int i = 0; i < key.size(); ++i)
		{
			ans += (mul%ts) * (key[i]%ts);
			ans %= ts;

			mul *= 17;
			mul %= ts;
		}

		return ans % ts;
	}

	void rehashing(){
		node** olda = a;
		int oldts = ts;
		a = new node*[2*ts];
		ts = 2*ts;
		cs = 0;

		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL;
		}

		for (int i = 0; i < oldts; ++i)
		{
			node* h = olda[i];
			while(h != NULL){
				insert(h->key, h->value);
				node* oldh = h;
				h = h -> next;

				delete oldh;
			}
		}

		delete []olda;
	}
public:
	node** a;
	int ts;
	int cs;

	Hashmap(int s = 3){
		ts = s;
		a = new node*[ts];
		cs = 0;

		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL; // We cannot leave pointers with garbage value
		}
	}

	void insert(string key, int value){
		int hashIndex = hashFunction(key);

		node* n = new node(key,value);
		n->next = a[hashIndex];
		a[hashIndex] = n;
		cs++;

		float load_factor = cs / (ts*1.0);
		if(load_factor >= 0.6){
			rehashing();
		}
	}


	void print(){
		for (int i = 0; i < ts; ++i)
		{
			node* h = a[i];
			cout << i << " : ";
			while(h != NULL){
				cout << "("<<h->key<<", "<<h->value<<") ";
				h = h -> next;
			}

			cout << endl;
		}
	}
};

int main(){

	Hashmap h;

	h.insert("Apple",100);
	h.insert("Mango",50);
	h.insert("Orange",80);
	h.insert("Kiwi",20);

	h.print();

	return 0;
}
















