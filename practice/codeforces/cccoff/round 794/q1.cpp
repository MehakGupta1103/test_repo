#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        for(int i = 0; i < n; i++){
            int temp = sum - arr[i];
            int ans = temp/(n-1);
            int r = temp%(n-1);
            if(ans == arr[i] && r == 0){
                cout << "yes" << endl;
                return ;
            }
        }
        cout << "no" << endl;
        return;
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}