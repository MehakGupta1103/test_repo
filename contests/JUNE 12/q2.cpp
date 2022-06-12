#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main()
{
    int dp[200001];

    int n, q;
    cin >> n >> q;
    int prices[n];
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    sort(prices, prices + n, greater<int>());
    dp[0] = prices[0];
    for(int i = 1; i < n; i++){
        dp[i] = dp[i-1] + prices[i];
    }
    
    while(q--)
    {
        int x, y;
        cin >> x >> y;
        if(x-y>0) cout << dp[x-1] - dp[x-y-1] << endl;
        else cout << dp[x-1] << endl;
    }

    return 0;
}