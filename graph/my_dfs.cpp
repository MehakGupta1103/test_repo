#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+10;
bool vis[N];
vector<int> graph[N];

vector<vector<int>> c;
vector<int> cc_c;

bool dfs(int vertex, int par){
    // if (vis[vertex]) return;
    bool loop = false;
    vis[vertex] = true;
    cc_c.push_back(vertex);
    for(int child : graph[vertex]){
        cout << child << " " << vertex << " " << par << endl;
        if(vis[child] && child==par) continue;
        if(vis[child]) return true ;
        loop |= dfs(child, vertex);
        
    }
    return loop;
}

int main(){

    int nodes, edges;
    cin >> nodes >> edges;

    int n1, n2;
    for(int i = 0; i < edges; i++){
        cin >> n1 >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }

    int count = 0;
    bool cycle = false;
    for(int i = 1; i < nodes+1; i++){
        if(vis[i]) continue;
        cout << i << ' ' << endl;
        cc_c.clear();
        cycle |= dfs(i, 0);
        c.push_back(cc_c);
        count ++;
    }
    cout << "no of components : " << count << endl;

    cout << "and the ccs are " << endl;
    for(auto &it: c){
        for(auto &itr: it){
            cout << itr << " ";
        }
        cout << endl;
    }
    cout << "the cycle exist " << cycle << endl;

    return 0;
}