#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];
int subtree_sum[N];

void dfs(int vertex, int par = 0)
{
    // cout << vertex << " the parent " << par << endl;
    subtree_sum[vertex] += vertex;
    for (auto child : graph[vertex])
    {
        if (child == par)
            continue;
        // cout << "the child " << child << endl;
        dfs(child, vertex);
        subtree_sum[vertex] += subtree_sum[child];
    }
    return;
}

int main()
{

    int nodes, edges;
    cin >> nodes >> edges;
    int n1, n2;
    for (int i = 0; i < edges; i++)
    {
        cin >> n1 >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    dfs(1);
    int temp, temp2;
    int total = subtree_sum[1];
    int p  = -1;
    for (int i = 1; i <= nodes; i++)
    {
        temp = subtree_sum[i];
        temp2 = total - temp;
        p = max(p, temp*temp2);
    }
    cout << p << endl;
    return 0;
}