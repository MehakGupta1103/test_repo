#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5 + 10;
int parent[N];
int size[N];
multiset<int> sizes;

void make(int v)
{
    parent[v] = v;
    size[v] = 1;
    sizes.insert(1);
}

int find(int v)
{
    if (parent[v] == v)
        return v;
    //path compression
    return parent[v] = find(parent[v]);
}

void merge(int a, int b){
    sizes.erase(sizes.find(size[a]));
    sizes.erase(sizes.find(size[b]));
    sizes.insert(size[a]+size[b]);
    size[a] += size[b];
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
        merge(a, b);
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
        if(sizes.size()==1) cout << 0 << endl;
        else{
            int mi = *(sizes.begin());
            int mx = *(--sizes.end());
            cout << mx-mi << endl;
        }
    }

    return 0;
}