#include <bits/stdc++.h>
using namespace std;

void solve(set<int> deff){
    for(auto &it: deff){
        cout << it << endl;
        if(it!=0 || it!= 1){
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
    return ;
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        int n; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n);
        set<int> deff;
        for(int i = 0 ; i < n; i++){
            deff.insert(b[i]-a[i]);
        }
        solve(deff);
    }
    
        
    return 0;
}