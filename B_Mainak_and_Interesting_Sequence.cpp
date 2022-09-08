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
       int n, m;
       cin >> n >> m;
       if(n==1){
           cout << "YES" << endl;
           cout << m << endl;
       }
       else if(n>m) cout << "NO" << endl;
       else if(m%n == 0){
           cout << "YES" << endl;
           for(int i = 0; i < n; i++) cout << m/n << " ";
           cout << endl;
       }
       else if(n%2==0){
           if(m&1) cout << "NO" << endl;
           else{
               cout << "YES" << endl;
               for(int i = 0; i < n-2; i++) cout << 1 << " ";
               cout << (m-n+2)/2 << " " << (m-n+2)/2 << endl;
           }
       }
       else{
           cout << "YES" << endl;
           for (int i = 0; i < n-1; i++)
               {
                   cout << 1 << " ";
               }
               cout << m-n+1 << endl;
       }
   }
   return 0;
}