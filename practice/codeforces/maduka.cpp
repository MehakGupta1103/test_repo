#include <bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    int n; cin >> n;
    int type;
    if(n%3==1){
        type = 1;
    }
    else{
        type = 2;
    }
    int sum = 0;
    while(sum!=n){
        cout << type << " ";
        sum += type;
        type = 3 - type;
    }
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        solve();
        
    }
    return 0;
    
}