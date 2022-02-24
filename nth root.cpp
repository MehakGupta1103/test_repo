#include<bits/stdc++.h>
#define int double
using namespace std;
double multi(int nko, int ptimes){
    double ans = 1;
    while(ptimes--) ans *= nko;
    return ans;
}
double nthroot(int num, int p){
    double exp = 1e-6;
    int lo = 1, hi = num;
    int mid;
    while(hi-lo>exp){
        mid = (lo+hi)/2;
        if(multi(mid,p)<num) lo = mid;
        else hi = mid;
    }
    return lo;
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        int root;
        cin >> root;
        cout << nthroot(num,root) << endl;
    }
    return 0;
}
//complexity-> for one test case num*log(10^root)
// so o(log(10^root))
