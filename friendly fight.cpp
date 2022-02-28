#include<bits/stdc++.h>
#define int long long
using namespace std;

void printBinary(int num){
    for(int i = 10; i >= 0; --i)    cout << ((num>>i)&1);
    cout << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int s, g;
        cin >> s >> g;
        int scount = 0;
        int gcount = 0;
        for(int i = 0; i < 32; i++){
            if( (s&(1<<i)) && (g&(1<<i)) ) scount += i;
            else if( (s&(1<<i)) || (g&(1<<i)) ) gcount += i;
        }
        if(scount==gcount) cout << "DRAW\n" << scount-gcount << endl;
        else if(scount>gcount) cout << "SHANTANU\n" <<  scount-gcount << endl;
        else cout << "GAUTAM\n" <<  gcount-scount << endl;
    }

    return 0;
}