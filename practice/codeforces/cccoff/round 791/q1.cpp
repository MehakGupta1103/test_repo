#include<bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        // cout << n << endl;
        if(n<4) cout << -1 << endl;
        else if(n%6==0){
            cout << n/6 << " ";
            if(n%4==0) cout << n/4 << endl;
            else cout << (n-6)/4+1 << endl;
        }

        else if(n%6==4){
            cout << (n-4)/6+1<<" ";
            if(n%4!=0) cout<<(n-6)/4+1 << endl;
            else cout << n/4 << endl;
        }
        else if(n%6==2){
            cout << (n-8)/6+2 <<" "; 
            // cout << n << 'j' << endl;
            if(n%4!=0) cout << (n-6)/4+1 << endl;
            else cout << n/4 << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}