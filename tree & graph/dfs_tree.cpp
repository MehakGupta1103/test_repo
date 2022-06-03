#include<bits/stdc++.h>
using namespace std;


const int N =1e5+10;
vector<int> graph[N];
int depth[N];
int height[N];

void dfs(int vertex, int par = 0){
    for(auto child: graph[vertex]){
        if(child==par) continue;
        depth[child] = depth[vertex]+1;
        cout << child << " " << vertex << endl;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child]+1);
    }
    return;
}

int main(){

    int nodes, edges;
    cin >> nodes >> edges;
    int n1, n2;
    for(int i = 0; i < edges; i++){
        cin >> n1 >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
        dfs(1);
    }
    for(int i = 1; i <= 5; i++){
        cout << depth[i] << " " << height[i] << endl;
    }
}