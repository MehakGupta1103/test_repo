#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string digits;
        cin >> digits;
        int oocount = 0, oecount = 0, eocount = 0, eecount = 0;
        for(int i = 0; i < digits.length(); i++){
            int temp = digits[i]-'0';
            if(i%2==0){ // odd position
            // cout << digits[i] << " this is digit ka i va element\n" ;
                if(temp%2==0) oecount++;
                else oocount++;
            }
            else{
                if(temp%2==0) eecount++;
                else eocount++;
            }
        }
        // cout << eecount << " eecout\n" << eocount << " eocount\n" << oocount << " oocount\n" << oecount << " oecoute \n" ;
        if(digits.length()%2==0){ // even length -> berch will dcide at least 1 even
            if(eecount>0) cout << 2 << endl;
            else cout << 1 << endl;
        }
        else{
            if(oocount>0) cout << 1 << endl;
            else cout << 2 << endl; 
        }

    }
}

// 4
// 1
// 2
// 1
// 3
// 3
// 102
// 4
// 2069