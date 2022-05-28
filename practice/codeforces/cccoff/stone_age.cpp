#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
        
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for(auto &it: a) cin >> it;

        int val = 0; 
        int sum = 0;
        
        map<int, int> upd;

        for(int i = 0; i < n; i++){
            sum += a[i];
            upd[i] = a[i];
        }

        while(q--){
            int t;
            cin >> t;

            if(t==1){
                int i, x;
                cin >> i >> x;
                i--;

                if(!upd.count(i)){
                    upd[i] = val;
                }

                sum -= upd[i];
                upd[i] = x;
                sum += upd[i];
            }
            else{
                int x;
                cin >> x;

                val = x;
                sum = x*n;
                upd.clear();
            }
            cout << sum << endl;
        }
}

int32_t main(){
    solve();
    return 0;
}