#include<bits/stdc++.h>
// #define int long long
using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int x, y;
        map< pair<int,int>, int > coordinates;
        for(int i = 0; i < k; i++){
            cin >> x >> y;
            coordinates[{x,y}] = 1;
        }
        int ans = k*4;
        // cout << ans << " " << endl;
        //for each element in map
        //find aju baaju vale 4 elements
        int xco, yco;
        for(auto &it: coordinates){
            xco = it.first.first;
            yco = it.first.second;
            // cout << xco << " " << yco << " " << endl;
            if(coordinates.find({xco,yco+1})!=coordinates.end()) ans--;
            if(coordinates.find({xco,yco-1})!=coordinates.end()) ans--;
            if(coordinates.find({xco+1,yco})!=coordinates.end()) ans--;
            if(coordinates.find({xco-1,yco})!=coordinates.end()) ans--;
        }
        cout << ans << endl;
    }
    return 0;
}