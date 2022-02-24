#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    // int t;
    // cin >> t;
    // while(t--){
    //     string s;
    //     cin >> s;
    //     vector<char> patt;
    //     vector<char> rev;
    //     for(int i = s.length()-1; i >=0; i--){
    //         rev.push_back(s[i]);
    //     }
    //     int count = 0;
    //     bool tr = 1;
    //     int index = 0;
    //     while(tr){
    //         char temp = s[index];
    //         if(temp!=rev[index]){
    //             patt.push_back(s[index]);
    //             if(rev[index]==patt[index]){
    //                 index++;
    //             }
    //         }
    //     }
    // }
    multiset<int> pos;
    int temp;
    for(int i =0 ; i < 4; i++) cin >> temp;
    pos.insert(temp);
    pos[3] /= 2; // nahi use kar sati be
    for(auto &it:pos) cout << it << " ";
    return 0;
}