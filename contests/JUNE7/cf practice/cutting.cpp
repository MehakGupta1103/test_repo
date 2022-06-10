#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){
		int n; cin >> n;
        int b; cin >> b;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ec = 0, oc = 0;
        vector<int> store;
        for(int i = 0; i < n-1; i++){
            if(a[i]&1) oc++;
            else ec++;
            if(oc == ec) store.push_back(abs(a[i] - a[i+1]));
        }
        sort(store.begin(), store.end());
        int len = store.size();
        int dp[len+1];
        dp[0] = 0;
        int i = 1;
        for(auto &it: store){
            // cout << it << " ";
            dp[i] = it + dp[i-1];
            i++;
        }
        cout << endl;
        for(int i = 0; i < len+1; i++){
            // cout << dp[i] << " ";
            if(b<dp[i]){
                cout << i-1 << endl;
                return 0;
            }
            if(b==dp[i]){
                if(i==len){
                    cout << i << endl;
                    return 0;
                }
                else continue;
            }
        }
        if(len<=0) cout << 0 << endl;
        else if(b>dp[len]) cout << len << endl;
        else cout << len-1 << endl;

	return 0;
}