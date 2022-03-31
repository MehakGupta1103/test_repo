#include <bits/stdc++.h>
#define int long long
using namespace std;
const int m = 1e9+10;
const int lo = 1e5+10;
int fact[lo];

void solve(){
    int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        if(n==1){
            if(arr[0]>1){
                cout << "NO" << endl;
                return ;
            }
        }
        sort(arr, arr+n);

        int temp = arr[n-1] - arr[n-2];
        if(temp>1){
            cout << "NO" << endl;
            return;
        }
        else{
            cout << "YES" << endl;
            return ;
        }
}

int32_t main() {
     
	int t;
	cin >> t;
	while(t--){
        solve();
	}
	return 0;
}
