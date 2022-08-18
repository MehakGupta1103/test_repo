#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int maxm[n];
    maxm[0] = a[0];
    for (int i = 0; i < q; i++)
        maxm[i] = max(maxm[i - 1], a[i]);
    while (q--)
    {
        int r, k;
        cin >> r >> k;
        int m = r - 1;
        int d = 0;
        if (maxm[m] > a[m])
            cout << 0 << endl;
        else
        {
            int gi = upper_bound(maxm, maxm + n, a[m]) - maxm;
            if (maxm[m] == maxm[n - 1])
            {
                if (m == 0)
                    cout << max(d, k) << endl;
                else
                    cout << max(d, k - m + 1) << endl;
            }
            else
            {
                if (m != 0)
                    k -= m - 1;
                cout << max(d, min(k, (m != 0) + gi - m - 1)) << endl;
            }
        }
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}