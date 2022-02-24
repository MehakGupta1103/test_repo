#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int len;
        cin >> len;
        string s;
        cin >> s;
        int zerocount = 0;
        for(int i = 0; i < len; i++){
            if(s[i]=='0') zerocount++;
        }
        if(zerocount==1 || zerocount%2==0) cout << "BOB\n";
        else cout << "ALICE\n";
    }
    return 0;
}