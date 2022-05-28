#include <bits/stdc++.h>
#define int long long
using namespace std;

void leftRotate(int *nums, int n, int k){
    k%=n;
    reverse(nums, nums+k);
    reverse(nums+k, nums+n);
    reverse(nums, nums+n);
}

void solve(){
    int n; cin >> n;    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans[n-1];
    for(int i = n-1; i >= 0; i--){
        int x;
        for( x = 0; x < i; x++){
            if(arr[x]==i+1) break;
        }
        if(x==i) x =- 1;
        leftRotate(arr, i+1, x+1);
        ans[i] = x+1;
    }
    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
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