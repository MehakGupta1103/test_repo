#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    vector<int> powers(10);
    powers[0] = 1;
    for (int i = 1; i <= 9; i++)
    {
        powers[i] = powers[i - 1] * 10;
    }
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> occ(n), a(n);
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            if (k < 0)
                break;
            occ[i] = k + 1;
            if (i != n - 1)
                occ[i] = min(occ[i], powers[a[i + 1] - a[i]] - 1);
            k -= occ[i];
            s += occ[i] * powers[a[i]];
        }
        cout << s << endl;
    }
    return 0;
}