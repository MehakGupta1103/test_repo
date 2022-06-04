#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5 + 10;
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
    //path compression
    return parent[v] = find(parent[v]);
}

void _union(int a, int b)
{
    int a = find(a);
    int b = find(b);

    if (a != b)
    {
        //Union by size
        if (size[a] < size[b])
        {
            swap(a,b);
        }
        parent[b] = a;
        size[a] += size[b];
    }
}

int32_t main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int> >> edges;
    int u, v, wt;
    for(int i = 0; i < n; i++){
        cin >> u >> v >> wt;
        edges.push_back({wt, {u,v}});
    }
    for(int i = 1; i <= n; i++) make(i);
    sort(edges.begin(), edges.end());
    int total_wt = 0;
    for(auto &edge: edges){
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if(find(u)==find(v)) continue;
        _union(u,v);
        total_wt += wt;
        cout << u << " " << v << endl;
    }
    cout << total_wt << endl;
    return 0;
}