#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+10;
bool vis[N];
vector<int> graph[N];

vector<vector<int>> c;
vector<int> cc_c;

void dfs(int vertex){
    // if (vis[vertex]) return;
    vis[vertex] = true;
    cc_c.push_back(vertex);
    for(int child : graph[vertex]){
        if(vis[child]) continue;
        dfs(child);
        cout << child << " " << vertex << endl;
    }

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
    //display function 1
    // for(auto &it: graph){
    //     // cout << it << " :" << endl;
    //     for(auto &ptr: it){
    //         cout << ptr << " ";
    //     }
    //     cout << endl;
    // }

    //display function 2
    // for(int i = 1; i < nodes+1; i++){
    //     cout << i << " :" << endl;
    //     for(auto &it: graph[i]){
    //         cout << it << " ";
    //     }
    //     cout << endl;
    // }
    int count = 0;
    for(int i = 1; i < nodes+1; i++){
        if(vis[i]) continue;
        cout << i << ' ' << endl;
        cc_c.clear();
        dfs(i);
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

    return 0;
}