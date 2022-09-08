#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
using namespace std;

const int N = 1e3;

void solve(){
    int p, q, r;
      cin >> p >> q >> r;
      int temp = 0;
      int ans = 1;
      for(int i = 0; i < 19; i++){
          if((p>>i)&1) temp++;
          if((q>>i)&1) temp++;
          if((r>>i)&1) temp++;
          if(temp == 3) ans *= 4;
          else if(temp == 1){
              cout << 0 << endl;
              return;
          }
        //   cout << temp << endl;
          temp = 0;
      }
      cout << ans << endl ;
}
  
int32_t main(){
   int t; cin >> t;
   while (t--)
   {
      solve();
   }
   return 0;
}