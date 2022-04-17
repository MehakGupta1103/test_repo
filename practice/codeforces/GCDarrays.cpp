#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int l, r, k;
    cin >> l >> r >> k;
    int temp;
    if(l==r && l!=1){
        cout << "YES" << endl;
        return ;
    }
    if(l&1){
        temp = ((r-l)/2)+1;
    }
    else{
        temp = (r-l+1)/2;
    }
    // cout << temp << endl;
    if(temp<=k) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}