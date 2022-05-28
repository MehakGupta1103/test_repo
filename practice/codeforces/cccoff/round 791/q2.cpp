#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{

    int n;
    cin >> n;
    int q;
    cin >> q;
    int arr[n];
    int sum = 0;
    int curr = -1;
    int b[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int t, x, index;
    while (q--)
    {
        cin >> t;

        if (t == 1)
        {
            cin >> index;
            cin >> x;

            if(curr != -1){

            }

            sum += x;
            sum -= arr[index - 1];

            arr[index - 1] = x;

            cout << sum << endl;
        }
        else
        {
            cin >> x;
            // for(int i = 0; i < n; i++) arr[i] = x;
            int arr[n] = {x};

            curr = x;
            
            sum = n * x;
            cout << sum << endl;
        }
    }
    return 0;
}