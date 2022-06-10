#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> b;
    int count;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'B')
            count++;
        else
        {
            b.push_back(count);
            count = 0;
        }
    }
    if (count != 0)
        b.push_back(count);
    sort(b.begin(), b.end(), greater<int>());
    if (k <= b[0])
    {
        cout << 0 << endl;
        return;
    }
    vector<int> ele(n+1, 0);
    // if(s[0] == 'B') ele[0] = 1;
    // else ele[0] = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == 'B')
            ele[i + 1] = ele[i]+1;
        else
            ele[i + 1] = ele[i];
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        if(i-k>=0)
            ans = min(ans, k - (ele[i] - ele[i - k]));
    }
    cout << ans << endl;
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