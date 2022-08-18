#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int temp = 0;
    int count = 0;
    for(int i = 0; i < n; i++)
        if(temp ^= a[i]) count++;
    cout << n-count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}