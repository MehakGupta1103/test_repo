//how to find cycle in a graph using dfs 
// and store 
// FOREST 
 #include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> graph_list[N];
bool vis[N];

bool dfs(int vertex, int par){

    /**
     * take action on vertex after entering 
     * the vertex
     */

    // we just visited the given vertex
    vis[vertex] = true;

    bool isLoop = false;

    // recursion
    for(int child : graph_list[vertex]){
        //base condition
        if(vis[child] && child == par) continue;
        if(vis[child]) return true;
        /**
         * take action on child before
         * entering the child node
         */

        isLoop |= dfs(child, vertex);
 
        /**  -- > backtracting
         * take action on child  
         * after exiting child node
         */
    }
    return isLoop;
}
//complexity -- > O(vertex+edges)


int main(){
    int n, e; cin >> n >>e;

    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;

        graph_list[x].push_back(y);
        graph_list[y].push_back(x);
    }
    int count = 0; 
        bool isLoop = false;

    for(int i = 0; i < n; i++){
        if(vis[i]) continue;
        if(dfs(i,0)){
            isLoop = true;
            break;
        }
    }
    cout << isLoop << endl;
}