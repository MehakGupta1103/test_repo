#include<bits/stdc++.n>
using namespace std;


class node{
public:
	int key;
	vector<node*> child;

	node(int data){
		key = data;
	}
}

map<int, int> children;

int no_of_child(node* root, int x){

	//initialise children
	int numChild = 0;

	//leaf node
	if(root == NULL){
		children[root] = 0;
		return 0;
	}

	while(!q.empty()){
		int n = q.size();

		while(n>0){

			node* p = q.front();
			q.pop();
			if(p->key==x){
				numChild = numChild+p->child.size();
				children[root] = numChild;
				return numChild;
			}

			for(int i = 0; i<  p->child.size(); i++){
				q.push(p->child[i]);
			}
			n--;
		}
	}

	children[root] = numChild;
	return numChild;
}

int main(){
	int n, k; cin >> n >> k;
	node* root = new node(n);
	int x, y,z;
	for(int i = 0; i < n; i++){
		cin >> x >> y >> z;
		(root->child[x]).push_back(new node(y));
	}
	int temp = no_of_child(root, 1);
	int lo = n;
	for(auto &it: children){
		if(n <= k){
			cout << i << endl;
			break;
		}
		n -= it;
	}
	if(n > k) cout << -1 << endl;
}