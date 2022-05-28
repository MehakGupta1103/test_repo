#include<bits/stdc++.h>
#define int long long
using namespace std;

int one(int rows){
    int ans = 0;
    ans += rows/3;
    if(rows%3!=0) ans++;
    return ans;
}

int two(int rows){
    int ans = rows/3*2;
    int temp = rows%3;
    ans += temp;
    return ans;
}

void solve(){
        int x, y;
        cin >> x >> y;
        int temp = 0, ans = 0;
        if(x==1){
            ans = one(y);
            cout << ans << endl;
            return;
        }
        if(y==1){
            ans = one(x);
            cout << ans << endl;
            return;
        }
        if(x%3==0){
            temp = x/3;
            ans += temp * y;
            cout << ans << endl;
            return;
        }
        if(y%3==0){
            temp = y/3;
            ans += temp * x;
            cout << ans << endl;
            return;
        }
        if(x==2){
            ans = two(y);
            cout << ans << endl;
            return;
        }
        if(y==2){
            ans = two(x);
            cout << ans << endl;
            return;
        }
        
        ans += (x/3)*y;
        temp = x%3;
        if(temp==1) ans += one(y);
        else ans += two(y);
        cout << ans << endl;
        return;

}

int32_t main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}