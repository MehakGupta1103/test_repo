#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    
int n; cin >> n;
      int arr[n];
      for(int i = 0; i < n; i++){
          cin >> arr[i];
      }
      vector<int> odar;
      vector<int> ear;
      for(int i = 0; i < n; i++){
          if(arr[i]&1){

              odar.push_back(arr[i]);
          }
          else{
              ear.push_back(arr[i]);
          }
      }

    for(int i = 1; i < odar.size(); i++){
        // cout << odar[i]<<" "<<odar[i-1]<<endl;
          if(odar[i]<odar[i-1]){
              cout << "NO" << endl;
              return ;
          }
    }
    for(int i = 1; i < ear.size(); i++){
        // cout << ear[i]<<" "<<ear[i-1]<<endl;
          if(ear[i]<ear[i-1]){
              
              cout << "NO" << endl;
              return ;
          }
    }
    cout << "YES" << endl;
    return;
}

int32_t main() {
  int t;
  cin >> t;
  while (t--) {
      
      solve();
  }
  return 0;
}