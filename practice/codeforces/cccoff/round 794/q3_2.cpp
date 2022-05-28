#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        if(n&1){
            cout << "NO" << endl;
            return;
        }
        sort(arr, arr+n);
        map<int, int> dis;
        for(int i = 0; i < n; i++){
            dis[arr[i]]++;
        }
        if(dis.size() == 1){
            cout << "NO" << endl;
            return;
        }
        
        for(auto it: dis){
            if(it.second > n/2){
                cout << "NO" << endl;
                return;
            }
            if(it.second == n/2){
                // cout << it.first << "el l" << endl;
                if( (it.first != arr[0]) && (it.first != arr[n-1]) ){
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        
        cout << "YES" << endl;
        int index = n/2;
        for(int i = 0; i < n/2; i++){
            cout << arr[i] << " " << arr[index] << " ";
            index++;
        }
        cout << endl;
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}