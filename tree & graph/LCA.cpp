<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];

int par[N];

void dfs(int vertex, int p = -1)
{
    par[vertex] = p;
    for (auto child : graph[vertex])
    {
        if (child == p)
            continue;
        dfs(child, vertex);
    }
}

vector<int> path(int v)
{
    vector<int> ans;
    while (v != -1)
    {
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
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

    int x, y;
    cin >> x >> y;
    vector<int> path_x = path(x);
    vector<int> path_y = path(y);
    int lca = -1;
    int minLen = min(path_x.size(), path_y.size());
    for(int i = 0; i < minLen; i++){
        if(path_x[i] == path_y[i]) lca = path_x[i];
        else break;
    }
    // if(path_x[0] == path_y[0]) lca = path_x[0];
    cout << lca << "  the least common ansistor is " << endl;
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];

int par[N];

void dfs(int vertex, int p = -1)
{
    par[vertex] = p;
    for (auto child : graph[vertex])
    {
        if (child == p)
            continue;
        dfs(child, vertex);
    }
}

vector<int> path(int v)
{
    vector<int> ans;
    while (v != -1)
    {
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
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

    int x, y;
    cin >> x >> y;
    vector<int> path_x = path(x);
    vector<int> path_y = path(y);
    int lca = -1;
    int minLen = min(path_x.size(), path_y.size());
    for(int i = 0; i < minLen; i++){
        if(path_x[i] == path_y[i]) lca = path_x[i];
        else break;
    }
    // if(path_x[0] == path_y[0]) lca = path_x[0];
    cout << lca << "  the least common ansistor is " << endl;
    return 0;
>>>>>>> 592d1cc22f99640d34d6d34ceb0586d3744f6b6d
}