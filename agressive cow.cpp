#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5+10;
int noofstalls, noofcows;
int stalls[N];
bool canplace(int dis){
    int lastp = -1;
    int cowscount = noofcows;
    for(int i = 0; i < noofstalls; i++){
        if(lastp == -1 || stalls[i]-lastp >= dis){
            lastp = stalls[i];
            cowscount--;
        }
        if(cowscount == 0) break;
    }
    return cowscount == 0;
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        cin >> noofstalls >> noofcows;
        for(int i = 0; i < noofstalls; i++){
            cin >> stalls[i];
        }
        sort(stalls, stalls+noofstalls);
        //TTTTTTFFFFFFF
        int lo = 0, hi = 1e9; // hi and lo represent the distances
        int mid;
        while(hi-lo>1){
            mid = (lo+hi)/2; // mid distance pe place kar sakte he kya 
            if(canplace(mid)) lo = mid;
            else hi = mid-1;
        }
        if(canplace(hi)) cout << hi << endl;
        else cout << lo << endl; 
    }
    return 0;
}