#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count = 0;
        vector<int> ones;
        int flag = 0;
        for( int i = 0; i < s.length(); i++){
            // cout << s[i] << "this is the value if s[i[" << endl;
            if(s[i] == '0'){
                // cout << "the value of count is " << count << endl;
                ones.push_back(count);
                count = 0;
                flag = 0;
            }
            else count++;
        }
        if(flag == 0) ones.push_back(count);      
        sort(ones.begin(), ones.end(),greater<int>());
        int alicekepoints = 0;
        // cout << "now calculating the points \n";
        for( int i = 0; i < ones.size(); i += 2){
            // cout << "the value os i is " << ones[i] << endl;
            alicekepoints += ones[i];
        }
        cout << alicekepoints << endl;
    }
    return 0;
}



// inputCopy
// 5
// 01111001 4
// 0000      0
// 111111    6
// 101010101 3
// 011011110111  6
// outputCopy
// 4
// 0
// 6
// 3
// 6