#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        sum += b[i];
    }
    set<int> diff_not0;
    vector<int> diff_0;

    for (int i = 0; i < n; i++)
    {
        int d = a[i] - b[i];
        if (b[i] != 0)
        {

            diff_not0.insert(d);
        }

        else
            diff_0.push_back(d);
        if (d < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (diff_not0.size() > 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (sum == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (diff_0.size() == 0)
    {
        cout << "YES" << endl;
        return;
    }
    sort(diff_0.begin(), diff_0.end(), greater<int>());
    int lo = diff_0[0];
    int bo;
    for (auto &it : diff_not0)
        bo = it;
    if (bo < lo)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        return;
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