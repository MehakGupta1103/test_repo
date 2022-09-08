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
   int arr[n];
   for(int i = 0; i < n; i++){
        cin >> arr[i];                
   }
   sort(arr, arr+n);
   map<int, int> hsh;
   for (int i = 0; i < n; i++)
   {
       hsh[arr[i]]++;
   }
   int d = 0;
   for(auto &it: hsh){
       if(d < it.second) d = it.second;
   }
   int steps = 0;
   while(d < n){
       steps += 1 + min(d, n-d);
       d += d;
   }
   cout << steps << endl;
}
 
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}