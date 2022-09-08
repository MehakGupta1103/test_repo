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
 
void solve(){
   int n; cin >> n;
   int a[2*n];
   for(int i = 0; i < 2*n; i++){
       cin >> a[i];                 
   }
   sort(a, a+n+n);
   cout << a[n]-a[n-1] << endl;
}
 
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}