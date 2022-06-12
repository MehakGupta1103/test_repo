// codeforces #960-- > Array and Operations

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(k==0){
        cout << accumulate(arr, arr+n, 0) << endl;
        return;
    }
    sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i ] << " ";
    // }
    // cout << endl;
    int j = n - k ;
    int i = n - 1 - 2 * k + 1;
    int temp = i;
    int ans = 0;
    while (k--)
    {
        // cout << i <<" i and j " << j << endl;
        // cout << arr[i] << " aith and jth " << arr[j] << endl;
        ans += arr[i] / arr[j];
        i++; j++;
    }
    for (int p = 0; p < temp; p++)
    {
        ans += arr[p];
    }
    cout << ans << endl;
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