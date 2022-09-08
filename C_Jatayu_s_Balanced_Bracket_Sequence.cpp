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
       string s; cin >> s;

        //curr = current depth
        //have = running depth
        int ans = n, curr = 0, have = 0;

        for (int i = 0; i < 2*n; i++){
            if(s[i]=='('){
                curr++;
                if(curr<=have){
                    ans--;
                }
                have = curr;
            }
            else curr--;
        }
        cout << ans << endl;
   }
   return 0;
}