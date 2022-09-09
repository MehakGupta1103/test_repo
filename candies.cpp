#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    // your code goes here
    int t;
    cin >> t;
    for(int itr = 1; itr <= t; itr++){
        int n, m;
        cin >> n >> m;
        int sum = 0;
        int temp;
        for(int i = 0; i < n; i++){
            cin >> temp;
            sum += temp;
        }
        cout << "Case #" << itr << ": " << sum%m << endl;
    }
    return 0;
}
