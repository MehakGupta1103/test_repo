#include <bits/stdc++.h>

using namespace std;

const int N = 1e3;

// making a list of childs of a given node
// vector of arrays
vector<int> g[N];

// visited array --> initialised 0 as noone of the node is visited
bool vis[N];

void dfs(int vertex)
{

    /*Take action on vertex after entering the vertex */

    //@  if(vis[vertex]) return;  @//

    vis[vertex] = true;

    for (int child : g[vertex])
    {
        cout << "parent --> " << vertex << " child --> " << child << endl;
        
        if (vis[child])
            continue;
        ; //@@//

        /* Take action on the child before
        ** entering the child node
        */

        dfs(child);

        /* Take action on child
        ** after exiting child node
        */
    }

    /* Take action on vertex before
    ** exiting the vertex
    */
}

int main()
{

    int nodes, edges;
    cin >> nodes >> edges;

    // vertex 1 ans vertex 2
    int v1, v2;

    for (int i = 0; i < nodes; i++)
    {
        cin >> v1 >> v2;

        // connecting
        g[v1].push_back(v2);
        g[v1].push_back(v2);
    }

    dfs(g[1][0]);

    return 0;
}