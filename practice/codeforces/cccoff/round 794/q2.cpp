#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int count = 0;
        for(int i = 0; i < n-1; i++){
            if(arr[i]>arr[i+1]){
                count++;
                i++;
            }
        }
        cout << count << endl;
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}