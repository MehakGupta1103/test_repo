#include<bits/stdc++.h>
using namespace std;

int ans(string st){
    int temp = 0;
    for(int i = 0; i < st.length(); i++){
        if(st[i] == '<') temp++;
        else {
            temp--;
            if(temp < 0) return i;
        }
    }
    return st.length();
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << ans(s) << endl;
    }
}
