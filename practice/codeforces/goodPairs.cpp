#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int t;
  cin >> t;
  while (t--) {
      int n; cin >> n;
      vector<pair<int, int>> arr;
      for(int i = 0; i < n; i++){
          int temp; cin >> temp;
          arr.push_back({temp, i+1});
      }
      sort(arr.begin(), arr.end());
      cout << arr[0].second << " " << arr[n-1].second << endl;
  }
  return 0;
}