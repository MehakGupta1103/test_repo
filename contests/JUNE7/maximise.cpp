#include <bits/stdc++.h>
#define int long long
const int N = 1e9 + 1;
using namespace std;
vector<int> lo;

int countSetBits(int n)
{
    // base case
    if (n == 0)
        return 0;

    else

        // if last bit set add 1 else add 0
        return (n & 1) + countSetBits(n >> 1);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n == k)
    {
        cout << n << endl;
        return;
    }
    if (n == 1)
    {
        cout << countSetBits(k) << endl;
        return;
    }
    int temp = k;
    int p;
    // cout << temp << "kfjgdlkf" << endl;
    int an = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     // cout << temp <<"t" << endl;

    //     if (i == n - 1)
    //     {
    //         an += countSetBits(temp);
    //     }
    //     else
    //     {
    //         vector<int>::iterator lower;
    //         lower = lower_bound(lo.begin(), lo.end(), temp);

    //         int ind = (lower - lo.begin()-1);
    //         p = lo[ind];
    //         // cout << p << " ";
    //         an += countSetBits(p);

    //         temp -= p;
    //     }
    // }
    while (temp > 0)
    {
        vector<int>::iterator lower;
        lower = lower_bound(lo.begin(), lo.end(), temp);

        int ind = (lower - lo.begin() - 1);
        p = lo[ind];
        // cout << p << " ";
        an += countSetBits(p);

        temp -= p;
    }
    cout << an << endl;
}

int32_t main()
{
    // your code goes here
    int power = 1;
    int ans = 0;
    lo.push_back(0);
    while (ans < N)
    {
        ans += power;
        lo.push_back(ans);
        power *= 2;
    }
    // for (auto &it : lo)
    // {
    //     cout << it << endl;
    // }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
