#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
       int n, m;
       cin >> n >> m;
       int arr[n];
       for(int i = 0; i < n; i++){
        cin >> arr[i];
       }
       int sum = accumulate(arr, arr+n, 0);
       if(m>=sum){
        cout << 0 << endl;
       }
       else{
        cout << sum-m << endl;
        }
    }
    return 0;
}