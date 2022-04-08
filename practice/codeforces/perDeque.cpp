#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int t;
  cin >> t;
  while (t--) {
      int n;
      cin >> n;
      int arr[n];
      for(int i = 0; i < n; i++) cin >> arr[i];
      int curr = arr[0];
      int front = -1, j = 1;
      vector<pair<int , int>> per;
      per.push_back({0, curr});
      for(int i = 1; i < n; i++){
          if(arr[i] == 1){
              per.push_back({front, 1});
              for(int k = i+1; k < n; k++){
                  per.push_back({j, arr[k]});
                  j++;
              }
              break;
          }
          else if(arr[i]<curr){
              per.push_back({front, arr[i]});
              front--;
              curr = arr[i];
          }
          else{
              per.push_back({j, arr[i]});
              j++;
          }
      }
      sort(per.begin(), per.end());
      for(int i = 0; i < n; i++) cout << per[i].second <<" ";
      cout << endl;
  }
  return 0;
}