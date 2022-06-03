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
    int par_a = find(a);
    int par_b = find(b);

    if (par_a != par_b)
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

    return 0;
}