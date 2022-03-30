#include<bits/stdc++.h>
using namespace std;

#define int long long
int a[105], n, h;
int32_t main()
{
    int t; cin >> t;
    while (t--) {
        cin >> n >> h;
        for (int i = 1; i <= n; i++) cin >> a[i];
        int l = 1, r = 1e18;
        while (l <= r) {
            int mid = l + r >> 1, ans = mid;
            for (int i = 1; i < n; i++) 
                ans += min(mid, a[i + 1] - a[i]);
            if (ans < h) l = mid + 1;
            else r = mid - 1;
        }
        cout << r+1 << endl;
    }
    return 0;
}


