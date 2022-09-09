#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	vector<char> a;
	for(int i = 0; i < n; i++){
		a.push_back(s[i]);
	}
	sort(a.begin(), a.end());
	// for(int i = 0; i < n; i++) cout << a[i] << " ";
	// 	cout << endl;

	vector<char> b = {'T', 'i', 'm', 'r', 'u'};

	if(a.size() != 5){
		cout << "NO" << endl;
		return;
	}
	else{
		for(int i = 0; i < 5; i++){
			if(a[i] != b[i]){
			cout << "NO" << endl;
			return;
		}
		}
		
	}
	cout << "YES" << endl;
	return;
}

int32_t main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}