#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 10;

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> count;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            count[arr[i]]++;
        int si = count.size();
        int val = 0;
        int flag = 0;
        for (auto &it : count)
        {
            if (it.second == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << -1 << endl;
        else
        {
            for (auto &it : count)
            {
                cout << val + it.second << " ";
                for (int j = val+1; j < val+it.second; j++)
                    cout << j << " ";
                val += it.second;
            
            }
        }

        cout << endl;
    }
    return 0;
}