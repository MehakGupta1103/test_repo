#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	for(int itr = 1; itr <= t; itr++){
		int n, r, c, x, y;
		cin >> n >> r >> c >> x >> y;
		string ins; cin >> ins;
		map<pair<int, int>, int> visited;
		visited[{x, y}] = 1;
		for(int i = 0; i < n; i++){
			if(ins[i] == 'E'){
				while(visited.find({x, y}) != visited.end()){
					y++;
				}
			}
			else if(ins[i] == 'W'){
				while(visited.find({x, y}) != visited.end()){
					y--;
				}
			}
			else if(ins[i] == 'S'){
				while(visited.find({x, y}) != visited.end()){
					x++;
				}
			}
			else{
				while(visited.find({x, y}) != visited.end()){
					x--;
				}
			}
			visited[{x,y}] = 1;
		}
		cout << "Case #" << itr << ": " << x << " " << y << endl; 
	}
}