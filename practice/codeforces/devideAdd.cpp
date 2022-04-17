#include <bits/stdc++.h>
#define int long long

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> even;
    vector<int> odd;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i]&1) odd.push_back(arr[i]);
        else even.push_back(arr[i]);
    }
    vector<int> e;
    vector<int> o;
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    if(odd.empty()){
        int len = even.size();
        int temp = 0;
        for(int i = 0; i < len-1; i++){
            temp += log2(even[i]);
        }
        int ans = even[len-1]*pow(2, temp);
        
        cout << ans+len-1 << endl;
    }
    else{
        int len = even.size();
        int len2 = odd.size();
        int temp = 0;
        for(int i = 0; i < len; i++){
            temp += log2(even[i]);
        }
        int ans = odd[len2-1]*pow(2, temp) + len;
        for(int i = 0; i < len2-1; i++){
            ans += odd[i];
        }
        cout << ans << endl;
    }
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        solve();
        
    }
    return 0;
    
}
