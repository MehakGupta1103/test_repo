//how to find connected components in a graph using dfs 
// and store 
// FOREST 
 #include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> graph_list[N];
bool vis[N];

vector<vector<int> > cc;
// to store elementss of one connencted component
vector<int> current_cc; // temprary vector to store com

void dfs(int vertex){

    /**
     * take action on vertex after entering 
     * the vertex
     */
    current_cc.push_back(vertex);
    //base condition
    if(vis[vertex]) return;

    // we just visited the given vertex
    vis[vertex] = true;

    // recursion
    for(int child : graph_list[vertex]){

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
    int n, e; cin >> n >>e;

    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;

        graph_list[x].push_back(y);
        graph_list[y].push_back(x);
    }
    int count = 0; 
    for(int i = 0; i < n; i++){
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        count++;
    }
    cout << count << endl;
    cout << cc.size() << endl;  //O(n+e)
}