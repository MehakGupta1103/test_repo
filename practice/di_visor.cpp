#include <bits/stdc++.h>
#define int long long
using namespace std;
const int m = 1e9+10;
const int lo = 1e5+10;
int fact[lo];

string solve(int n, int arr[]){
    for(int i = 0; i < n; i++){
        if(arr[i]%fact[i+2] == 0) return "NO";
    }
    return "YES";
}

int32_t main() {
      fact[0] = 1;
    for(int i = 1; i < lo; i++){
        fact[i] = (fact[i-1]*1LL*i);
    }
	// your code goes here
	int t;
	cin >> t;
	while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        string ans = solve(n, arr);
        cout << ans << endl;
	}
	return 0;
}
