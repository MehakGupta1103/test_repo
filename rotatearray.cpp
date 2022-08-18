#include <bits/stdc++.h>

#define loop(i, start, end) for (int i = start; i < end; i++)

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n;
        cin >> n;
        int arr[n];
        loop(i, 0, n) cin >> arr[i];
        int d;
        cin >> d;
        loop(i, 0, n / 2) swap(arr[i], arr[n - i - 1]);
        // loop(i, 0, n) cout << arr[i] << " ";
        // cout << endl;
        loop(i, 0, (n - d) / 2) swap(arr[i], arr[n - i - d - 1]);
        // loop(i, 0, n) cout << arr[i] << " ";
        // cout << endl;
        // loop(i, 0, d/2) cout << n-d << " " << n-i-1 << endl;
        loop(i, 0, d / 2) swap(arr[n - d], arr[n - i - 1]);
        loop(i, 0, n) cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}