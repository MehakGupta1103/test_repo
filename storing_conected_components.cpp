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

//to store connected components
vector<vector<int>> cc;
vector<int> current_cc;
 
void dfs(int vertex){
    current_cc.pb(vertex);
    vis[vertex] = 1;
    for(auto &child: graph[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }
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
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.pb(current_cc);
        count++;
    }

    for(auto &it: cc){
        for(auto &nodes: it){
            cout << nodes << " ";
        }
        cout << endl;
    }

    cout << "no of connected components are" << count << endl;
   return 0;
}