#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> graph_list[N];
bool vis[N];

void dfs(int vertex){

    /**
     * take action on vertex after entering 
     * the vertex
     */

    //base condition
    if(vis[vertex]) return;

    // we just visited the given vertex
    vis[vertex] = true;

    // recursion
    for(int child : graph_list[vertex]){
        cout << "parent -- >" << vertex << " child -- > " << child << endl;

        /**
         * take action on child before
         * entering the child node
         */
        dfs(child);

        /**  -- > backtracting
         * take action on child  
         * after exiting child node
         */
    }
}
//complexity -- > O(vertex+edges)


int main(){
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;

        graph_list[x].push_back(y);
        graph_list[y].push_back(x);
    }
    dfs(1);
}