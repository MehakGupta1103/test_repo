#include <bits/stdc++.h>
using namespace std;
const int p = 2 * 1e6 + 1;
int hsh[p];

int main()
{
    long long int n, k;
    cin >> n >> k;
    int a[n];
    long long int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hsh[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        // cout << k - a[i] << " " << a[i] << endl;
        if (k - a[i] >= 0)
        {
            if (a[i] == (k - a[i]))
            {
                if (hsh[k - a[i]] > 1)
                c++;
            }
            else if (hsh[k - a[i]] > 0)
                c++;
        }
    }
    if (c > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}