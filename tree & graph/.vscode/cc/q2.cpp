#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int steps = 0;
        if(x<y) steps = y-x;
        else if(x>y){
            int deff = x-y;
            if(deff&1){
                steps += (deff-1)/2 + 2;
            }
            else steps += deff/2;
        }
        cout << steps << endl;
    }
    return 0;
}