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

      int n; cin >> n;
      if(n == 1) cout << 3 << endl;
      else if(n==2) cout << 5 << endl;
      else if(n==3) cout << 7 << endl;
      else{
         if((n-4)%3 == 0){
            cout << ((n-4)/3 + 2) *4 << endl;
         }
         else if(n%3==0) cout << (((n-4)/3 + 2) *4 )+3 << endl;
         else cout << (((n-4)/3 + 2) *4 )+1 << endl;
      }
   return 0;
}