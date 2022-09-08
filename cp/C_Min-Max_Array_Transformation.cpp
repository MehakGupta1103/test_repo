#include<bits/stdc++.h>
#define int long long
#define f first
#define s second
// #define vector<pari<int, int>> v<pll>

using namespace std;

void solve(){
   int n; cin >> n;
   vector<int> a(n);
   vector<int> b(n);

   for(int i = 0; i < n; i++){
        cin >> a[i] ;              
   }
   for(int i = 0; i < n; i++){
        cin >> b[i] ;              
   }

   int index = n;
   vector<pair<int, int>>  ans(n);
   for (int i = n-1; i >= 0; i--)
   {
       auto it = lower_bound(b.begin(), b.begin()+index, a[i]);
       int current = (it - b.begin());
       ans[i] = { b[current]-a[i], b[index-1]-a[i]};

       if((b.end()-it) == (n-i)) {
           index = i;

       }

   }
   for (int i = 0; i < n; i++)
   {
       cout << ans[i].f << " ";
   }
   cout << endl;

   for (int i = 0; i < n; i++)
   {
       cout << ans[i].s << " ";
   }cout << endl;
   
}
 
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}