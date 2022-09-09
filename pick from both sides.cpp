//all sorted

#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n, b; cin >> n >> b;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for(int i = 0; i < b; i++){
        sum += a[i];
    }
    int ans = sum;
    for(int i = n-1; i >= 0; i--){
        cout << b-i-1 << endl;
        ans = max(sum-a[b-i-1]-a[i], ans);
    }
    cout << ans << endl;
    return 0;
}
