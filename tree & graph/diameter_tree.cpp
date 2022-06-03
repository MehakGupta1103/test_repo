#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];

int depth[N];

void dfs(int vertex, int par = -1)
{
    for (auto child : graph[vertex])
    {
        if (child == par)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    int n1, n2;
    for (int i = 0; i < edge; i++)
    {
        cin >> n1 >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    dfs(1);

    int max_depth = -1;
    int max_d_node = -1;

    for (int i = 1; i < node + 1; i++)
    {
        if (max_depth < depth[i])
        {
            max_depth = depth[i];
            max_d_node = i;
        }
        depth[i] = 0;
    }

    dfs(max_d_node);

    max_depth = 0;
    for (int i = 1; i < node + 1; i++)
    {
        if (max_depth < depth[i])
        {
            max_depth = depth[i];
        }
    }
    cout << max_depth << endl;
    return 0;
}