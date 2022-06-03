#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {

       int n; cin >> n;
       int arr[n];
       for(int i = 0; i < n; i++){
           cin >> arr[i];
       }
       int o = 0, e = 0;
       for(int i = 0; i < n; i++){
           if(arr[i]&1) o++;
           else e++;
       }
       if(e==0){
           cout << 0 << endl;
       }
       else if(o>0){
           cout << e << endl;
       }
       else{
           
           int ans = 1e9;
           for(int i = 0; i  < n; i++){
               int k = 0;
               while(!(arr[i]&1)){
                   k++;
                   arr[i] /= 2;
               }
               ans = min(ans, k);
           }
           cout << ans+n-1 << endl;
       }
    }
    return 0;
}