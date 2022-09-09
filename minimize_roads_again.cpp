#include<bits/stdc++.n>
using namespace std;

vector<pair<int, int>> tree;

int dfs(int root, int par, bool blo){
	int cur = 1;int
	for(auto &it: tree[root]){
		if(it.first != par){
			int x = dfs(it.first, root, (blo||it.second));
			cur += x;

			if(it.second && !blo){
				temp.push_back(x);
			}
		}
	}
	return cur;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int x, y, z;
		for(int i = 0; i < n; i++){
			cin >> x >> y >> z;
			tree[x].push_back({y, z});
			tree[y].push_back({x, z});
		}
		dfs(1, 0, 0);
		int p = k;
		int flag = 0;
		sort(temp.rbegin(), temp.rend());
		if(n <= k){
			cout << 0 << endl;
			flag = 1;
		}
		else{
			for(int i = 0; i < temp.size(); i++){
				p -= temp[i];
				if(p <= k){
					cout << i+1 << endl;
					flag = 1;
					return;
				}
			}
		}
		if(flag == 0) cout << -1 << endl;
	}

}