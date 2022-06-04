// minimum spanning tree question from codeforces
#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e3 + 10;
int parent[N];
int size[N];

void make(int v)
{
    parent[v] = v;
    size[v] = 1;
}

int find(int v)
{
    if (parent[v] == v)
        return v;
    // path compression
    return parent[v] = find(parent[v]);
}

void _union(int a, int b)
{
     a = find(a);
     b = find(b);

    if (a != b)
    {
        // Union by size
        if (size[a] < size[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        size[a] += size[b];
    }
}

int32_t main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> cities(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> cities[i].first >> cities[i].second;

    vector<int> c(n+1), k(n+1);
    for (int i = 1; i <= n; i++) cin >> c[i];
    for (int i = 1; i <= n; i++) cin >> k[i];

    vector<pair<int, pair<int, int>>> edges;
    
    for (int i = 1; i <= n; i++)
    {
        edges.push_back({c[i], {0,i}});
    }


    for (int i = 1; i <= n; i++)
        make(i);

    for (int i = 1; i <= n; i++){
        for (int j = 1+i; j <= n; j++){
            int dis = abs(cities[i].first-cities[j].first) + abs(cities[i].second-cities[j].second);
            int cost = dis*(k[i]+k[j]);
            edges.push_back({cost, {i, j}});
        }
    }
    
    sort(edges.begin(), edges.end());
    int total_wt = 0;
    vector<int> power_stations;
    vector<pair<int, int>> connections;
    for (auto &edge : edges)
    {
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if (find(u) == find(v))
            continue;
        _union(u, v);
        total_wt += wt;
        // cout << u << " " << v << endl;
        if(u==0||v==0){
            power_stations.push_back(max(u, v));
        }
        else{
            connections.push_back({u, v});
        }
    }
    cout << total_wt << endl;
    cout << power_stations.size() << endl;
    for(auto &st: power_stations) cout << st << " ";
    cout << endl;
    cout << connections.size() << endl;
    for(auto &con: connections) cout << con.first << " " << con.second << " " << endl;
    cout << endl;
    return 0;
}