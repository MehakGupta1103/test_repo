#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<string, int>> data;
    for(int i = 1; i <= n; i++){
        string s; cin >> s;
        data.push_back({s,i});
    }
    for(int i = 0; i < n; i++){
        // cout << data[i].first << " " << data[i].second << endl;
            for(int j = 1; j < m; j+=2){
                data[i].first[j] = char(155-data[i].first[j]);
            }
    }
    sort(data.begin(), data.end());
    for(int i = 0; i < n; i++) cout << data[i].second << " ";
    return 0;
}
