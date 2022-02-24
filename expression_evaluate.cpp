#include<bits/stdc++.h>
using namespace std;
set<char> digits = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int main(){
    string s;
    cin >> s;
    vector<string> exp;
    string temp;
    for(int i = 0; i < s.length(); i++){
        if(digits.find(s[i])!=digits.end()) temp += s[i];
    }
    
}