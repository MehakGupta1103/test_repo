#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n, m;
    cin >> n >> m;
    int arrn[n];
    int arrm[m];
    for(int i = 0; i < n; i++) cin >> arrn[i];
    for(int i = 0; i < m; i++) cin >> arrm[i];
    vector< pair<int,int> > ans;
    int minA = 1e9;
    int minindex = -1;
    for(int i = 0; i < n; i++){
        if(minA >= arrn[i]){ 
            minA = arrn[i];
            minindex = i;
        }
    }
    int maxB = 0;
    int maxindex = -1;
    for(int i = 0; i < m; i++){
        if(maxB<=arrm[i]){
            maxB = arrm[i];
            maxindex = i;
        }
    }
    for(int i = 0; i < n; i++){
        if(i!=minindex){
            ans.push_back({i,maxindex});
        }
    }
    for(int i = 0; i < m; i++){
        ans.push_back({minindex,i});
    }
    for(auto &it: ans) cout << it.first << " " << it.second << endl;
    return 0;
}