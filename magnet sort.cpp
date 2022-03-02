#include <bits/stdc++.h>

using namespace std;
#define ll          long long int
#define vi 			 vector<int>
#define pb           push_back
#define fi           first
#define si           second
#define pii 		 pair<int,int>
#define vii 		 vector<pair<int,int>>
#define F(a,n)       for(int i=0;i<n;i++){cin>>a[i];}
#define P(a,n)       for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define fastIO       ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F1(a,n)      for(int i=1;i<=n;i++){cin>>a[i];}
#define P1(a,n)      for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define mem(a,b)     memset(a, b, sizeof a)
#define matrix(x) 	 vector<vector<x>>
#define NF(a,n,m)    for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j];}}
#define NF1(a,n,m)   for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cin>>a[i][j];}}
#define PNF(a,n,m)   for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define PNF1(a,n,m)  for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
const int nax = 1e7;
const int mod = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		vec.push_back(x);
	}
	string s;
	cin >> s;
	if (is_sorted(vec.begin(), vec.end())) {
		cout << 0 << "\n";
		return;
	}
	int countN = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'N') {
			countN++;
		}
	}
	if (countN == 0 || countN == s.size()) {
		cout << -1 << "\n";
		return;
	}

	vector<int> vec1 = vec;
	sort(vec.begin(), vec.end());

	int e = INT_MIN, st = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (vec[i] != vec1[i]) {
			e = max(e, i);
			st = min(st, i);
		}
	}

	bool v1 = false, v2 = false;
	for (int i = 0; i < st; i++) {
		if (s[i] != s[e]) {
			v1 = true;
		}
	}
	for (int i = e; i < n; i++) {
		if (s[i] != s[st]) {
			v2 = true;
		}
	}

	if (s[e] != s[st] || v2 || v1) {
		cout << 1 << "\n";
	}
	else {
		cout << 2 << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
