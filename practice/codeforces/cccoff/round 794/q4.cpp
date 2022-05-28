#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
        
        int arr[4];
        for(int i = 0; i < 4; i++) cin >> arr[i];
        string s;
        cin >> s;
        int count[] = {0, 0, 0, 0};
        int a = 0, b = 0, c = 0, d = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='A') a++;
            if( (s[i+1] == 'B') && (i+1 < s.length()) ) c++;
            if(s[i] == 'B') b++;
            if( (s[i+1] == 'A') && (i+1 < s.length()) ) d++;
        }
        if(c < arr[2] || d < arr[3]){
            cout << "NO" << endl;
        }
        if(c==arr[2])
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}