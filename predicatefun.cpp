/***********************************                      EkO                    *******************************/

#include<bits/stdc++.h>
#define int long long
using namespace std;
int Ttree;
int Ttrees[10], amount;

int wood(int x){
    int we = 0;
    for (int i = 0; i < Ttree; i++){
        if(Ttrees[i]>=x){
            we = Ttrees[i]-x;
        }
        }
    return we >= amount;
    
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        
        cin >> Ttree >> amount;
        for(int32_t i = 0; i < Ttree; i++) cin >> Ttrees[i];
        int lo = 0, hi = 1e9;
        //tttttffff
        while(hi-lo>1){
            int mid = (hi+lo)/2;
            if(wood(mid)) lo = mid+1;
            else hi = mid;
        }
    }
    return 0;
}