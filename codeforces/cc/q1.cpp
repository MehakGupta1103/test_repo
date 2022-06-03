#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int e = 0, o = 0;
        for(int i = 0; i < n; i++){
            if(arr[i]&1) o++;
            else e++;
        }
        cout << min(o, e) << endl;
    }
    return 0;
}