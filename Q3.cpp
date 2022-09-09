#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
	int n; cin >> n;
	vector<string> a;
	vector<string> b;
	vector<string> c;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	sort(c.begin(), c.end());

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	for(int i = 0; i < n; i++){
		cin >> c[i];
	}

	int cnt_a = 0, cnt_b = 0, cnt_c = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == b[i] && b[i] == c[i]);
		else if(a[i] == b[i]){
			cnt_c += 3;
			cnt_a += 1;
			cnt_b += 1;
		}
		else if(a[i] == c[i]){
			cnt_c += 1;
			cnt_a += 1;
			cnt_b += 3;
		}
		else if(b[i] == c[i]){
			cnt_c += 1;
			cnt_a += 3;
			cnt_b += 1;
		}
		else{
			cnt_c += 3;
			cnt_a += 3;
			cnt_b += 3;
		}
	}
	cout << cnt_a << " " << cnt_b << " " << cnt_c << endl;
}

int32_t main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}