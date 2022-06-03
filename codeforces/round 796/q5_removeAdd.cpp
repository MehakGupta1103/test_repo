#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        map<int, int> m;
        int j = 0;
        int ans = 1e9;
        for (int i = 0; i < n; i++)
        {
            m[array[i]]++;
            while (m[array[i]] > 1)
            {
                m[array[j]]--;
                j++;
            }
            ans = min((2 * min(j, n - i - 1) + max(j, n - i - 1)), ans);
        }
        cout << ans << endl;
    }
    return 0;
}