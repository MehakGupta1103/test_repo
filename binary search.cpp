#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int len;
        cin >> len;
        vector<int> num(len);
        for(int i = 0; i < len; i++) cin >> num[i];
        int toFind;
        cin >> toFind;
        int lo = 0, hi = len-1;
        int mid;
        while(hi-lo>1){
            mid = (hi+lo)/2;
            if(num[mid]<toFind) lo = mid+1;
            else hi = mid;
        }
        if(num[lo]==toFind) cout << lo;
        else if(num[hi]==toFind) cout << hi;
        else cout << " not found " << endl;
    }
    return 0;
}