#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int temp1 = (s[0]-'a') ;
        int temp2 = (s[1]-'a') +1;
        int ans = temp1*26 + temp2;
        int lo = s[0]-'a';
        if(s[0]<s[1]) ans--;
        cout << ans-lo << endl;
    }
}