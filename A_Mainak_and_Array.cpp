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
  
int32_t main(){
   int t; cin >> t;
   while(t--){
       int n; cin >> n;
       int arr[n];
       for (int i = 0; i < n; i++)
       {
           cin >> arr[i];
       }
       int small = arr[0];
       int large = arr[n-1];
       int maxe = arr[n-1], mine = arr[0];
       int ans = arr[n-1]-arr[0];
    //    cout << large << " " << small << " " << maxe << " " << mine << endl;
    //    cout << max(large-small, max(large-mine, maxe-small)) << endl;
    for (int i = 0; i < n; i++)
    {
        if(mine > arr[i]) mine = arr[i];
        if(maxe < arr[i]) maxe = arr[i];
    }
    if(mine == small) cout << maxe-mine << endl;
    else if(maxe == large) cout << maxe-mine << endl;
    else{
        for (int i = 0; i < n-1; i++)
        {
            ans = max(arr[i]-arr[i+1], ans);
        }
        cout << max(ans, max(maxe-small, large-mine)) << endl;
    }
   }
   return 0;
}