#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string patt = "";
        for(int i = 0; i < s.length(); i++){
            if(i%2==0){
                //alice ki turn
                if(s[i]=='a') patt += 'b';
                else patt += 'a';
            }else{ //bob ki turn
                if(s[i] == 'z') patt += 'y';
                else patt += 'z';
            }
        }
        cout << patt << endl;
    }
}

// inputCopy
// 3
// a
// bbbb
// az
// outputCopy
// b
// azaz
// by