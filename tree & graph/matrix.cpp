#include<bits/stdc++.h>
using namespace std;

//! GRAPH FORMATION

int main(){
    int n = 7; cin >> n; //n != 1e6 --> space complexity becomes out of bound --> n <= 1e3
    int graph_matrix[n][n] = {0};

    vector<pair<int, int> > graph_list[n];

    int wt; // weight of the edge

    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;

        graph_matrix[x][y] = 1;  // 1 --> wt
        graph_matrix[y][x] = 1;  // 1 --> wt

        graph_list[x].push_back({y,wt});
        graph_list[y].push_back({x,wt});
    }

    int m, n; cin >> m >> n; // no of queries to find if m is pair of n ?? or not : J|

    cout << graph_matrix[m][n] << endl; // 1 --> connected , 0 -- > not connected 
    // O(1) was the time complexity

    for(auto &it : graph_list[m]){         //more time complexity -- > O(m)
        if(it.first == n){
            cout << it.second << endl;
        }
    }
}