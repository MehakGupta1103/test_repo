#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){

    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> store;
    int count = 1;
    for(int i = 1; i < n; i++){
        if(a[i]<=(a[i-1]*2 )){
            count++;
            // cout << a[i] << " " << 2*a[i-1] << endl;
        }
        else{
            store.push_back(count);
            count = 1;
        } 
    }
    store.push_back(count);
    int ans =0;
    for(auto &it : store){
        ans = max(ans,it);
    }
    cout << ans << endl;
	return 0;
}