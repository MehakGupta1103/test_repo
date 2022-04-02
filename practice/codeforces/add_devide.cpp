#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    int ans = 1e8, count ;
    for(int i = 0; i*i <= a; i++){
        if(i==0 and b==1){
            continue;
        }
        count = i;
        int temp = a;

        while(temp){
            temp /= (b+i);
            count++;
        }
        ans = min(ans, count);
    }
    cout << ans << endl;
  }
}