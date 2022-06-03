#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e3 + 10;
const int INF = 1e9 + 10;

int dist[N][N];

int32_t main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> dist[i][j];
        }
    }
    vector<int> del_order(n);
    for(int i = 0; i < n; i++){
        cin >> del_order[i];
    }
    reverse(del_order.begin(), del_order.end());
    vector<int> ans;
    for (int k = 0; k < n; k++)
    {
        int k_v = del_order[k];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int new_dist = min(dist[i][j], dist[i][k_v] + dist[k_v][j]);
                dist[i][j] = new_dist;
            }
        }
        int sum = 0;
        for(int i = 0; i <= k; i++){
            for(int j = 0; j <= k; j++){
                sum += dist[del_order[i]][del_order[j]];
            }
        }
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());

    for(auto &it: ans){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}