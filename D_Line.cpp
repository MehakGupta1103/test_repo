#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
using namespace std;

const int N = 1e5;
int vis[N];

vector<int> graph[N];


 
bool dfs(int vertex, int parent){

    vis[vertex] = 1;

    bool isLoop = 0;

    for(auto &child: graph[vertex]){
        
        //child is visited and it is the parent of the current node
        if(vis[child] && child == parent) continue;

        // is not parent
        if(vis[child]) return true;

        //child not visited
        isLoop |= dfs(child, vertex);
    }

    return isLoop;
}
 
int32_t main(){
   int n, e;
   cin >> n >> e;
   int x, y;
    for(int i = 0; i < e; i++)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].pb(x);
    }
    // dfs(1);
    bool loop_exist = 0;
    for(int i = 1; i <= n; i++){
        if(vis[i]) continue;
        loop_exist |= dfs(i, 0);
        if(loop_exist) break;
    }
    cout << loop_exist << endl;
   return 0;
}