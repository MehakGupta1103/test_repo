#include<bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if(l2>=l1 && l2<=r1) cout << l2 << endl;
        else if(l1>=l2 && l1<=r2) cout << l1 << endl;
        else cout << l1+l2 << endl;
    }
    return 0;
}