#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        int n, x, y;
        cin >> n >> x >> y;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        // cout << " the array is: " << endl;
        // for(int i = 0; i < n; i++) cout << arr[i] << " ";
        // cout << endl;
        if (x > y)
        {
            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                if ((arr[i] - y * ans) >= x)
                    ans += ceil(float(arr[i] - y * ans) / x);
            }
            cout << ans << endl;
        }
    }
    return 0;
}
