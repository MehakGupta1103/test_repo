#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
     int a, b, c, m;
     cin >> a >> b >> c >> m;
     int sum = a + b + c;
     int maxm = sum - 3;
     int temp = max(a, max(b, c));
     int minm = 2*temp - sum - 1;
     if(minm<0) minm = 0;
     cout << minm << "this is min \n";
     if(m>=minm && m<=maxm) cout <<"yes" << endl;
     else cout << "no" << endl;
}
 
int32_t main()
{
    int t; cin >> t;
    while (t--) {
      solve();
    }
    return 0;
}