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
    a = find(a);
    b = find(b);

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
    int n, k;
    cin >> n >> k;
    for(int i = 1; i < n+1; i++) make(i);
    while(k--){
        int u, v;
        cin >> u >> v;
        _union(u, v);
    }
    int ct = 0;
    for(int i = 1; i <= n; i++){
        if(find(i)==i) ct++;
    }
    cout << ct << endl;
    return 0;
}