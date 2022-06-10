#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int per[n];
    for (int i = 0; i < n; i++)
    {
        cin >> per[i];
    }
    int dat[n];
    for(int i = 0; i < n; i++){
        dat[i] = per[i];
    }
    if(n==1){
        cout << -1 << endl;
        return;
    }
    // int flag = 1;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (per[i] > per[i + 1])
    //         flag = 0;
    // }
    // if (flag)
    // {
    //     for (int i = 1; i < n; i++)
    //     {
    //         cout << per[i] << " ";
    //     }
    //     cout << per[0] << endl;
    //     return;
    // }
    sort(per, per + n);
    int j = 0;
    for(int i = 0; i < n; i++){
        if(dat[i] == per[j]){
            if(j==n-1){
                swap(per[j], per[j-1]);
            }
            else swap(per[j], per[j+1]);
        }
        j++;
    }
    for(int i = 0; i < n; i++){
        cout << per[i] << " ";
    }
    cout << endl;
    return;
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