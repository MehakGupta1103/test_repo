#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
	int n; cin >> n;
	string a, b;
	cin >> a >> b;
	for(int i = 0; i < n; i++){
		if(a[i] == 'R'){
			if(b[i] != 'R'){
				cout << "NO" << endl;
				return;
			}
		}
		else{
			if(b[i] == 'R'){
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
}

int32_t main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}