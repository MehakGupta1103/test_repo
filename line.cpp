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
 
int32_t main(){
   int t; cin >> t;
   while(t--){
       int n; cin >> n;
       string s; cin >> s;
       vector<int> v;
       int sum = 0;
       for(int i = 0; i < n; i++){
           if(i < n/2){
               if(s[i] != 'R'){
                   v.push_back(abs(2*i-n+1));
                    sum += i;
               }
               else sum += n-i-1;
           }
           else{
               if(s[i] != 'L'){
                   v.push_back(abs(2*i-n+1));
                   sum += (n-i-1);
               }
               else sum += i;
           }
        //    cout << sum << " ";
       }
    //    cout << endl;
       sort(v.begin(), v.end(), greater<int>());
       int k = n;
          for(int i = 0; i < v.size(); i++){
                sum += v[i];
                cout << sum << " ";
            } 
            for(int i = k-v.size(); i > 0; i--) cout << sum << " ";
       

       cout << endl;
       

   }
   return 0;
}