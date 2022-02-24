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
    map< int, pair<int,int> > dispair;
    int indexn = 0, indexm = 0;
    // while(dispair.size()!= (n+m-1)){
    //     int temp = arrn[indexn]+arrm[indexm];
    //     dispair[temp] = make_pair(indexn, indexm);
    //     indexn++;indexm++;
    // }
    int te = n+m-1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << " the value of temp is " ;
            int temp = arrn[i]+arrm[j];
            cout << temp << endl;
            // dispair[temp] = make_pair(i, j);
            dispair.insert({temp,make_pair(i,j)});
            cout << " the value of i ams j os " << i <<" " << j << endl;
            te--;
            
        }if(te==0) break;
    }
    for(int i = 0; i < (n+m-1); i++){
        // cout << dispair[i] << endl;
        cout << dispair[i].first << " " << dispair[i].second << endl;
    }
    for(auto &it: dispair){
        auto value = it.second;
        cout << value.first << value.second << endl;
    }
    return 0;
}