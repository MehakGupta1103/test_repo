#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<string> pat;
void generator(string &s, int open, int close){
    if(open == 0 && close == 0){
        pat.push_back(s);
        return;
    }
    if(open > 0){
        s.push_back('(');
        generator(s, open-1, close);
        s.pop_back();
    }
    if(close > 0){
        if(open < close){
            s.push_back(')');
            generator(s, open, close-1);
            s.pop_back();
        }
    }
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        string s = "";
        generator(s, num, num) ;
        for(auto &it: pat) cout << it << endl;
    }
    return 0;
}
