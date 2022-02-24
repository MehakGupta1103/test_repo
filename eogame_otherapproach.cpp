#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int len;
        cin >> len;
        int globalAns = 0;
        vector<int> num(len);
        for(int i = 0; i < len; i++){
            cin >> num[i];
        }
        sort(num.begin(), num.end(), greater<int>()); //reverse order sort
        bool tr = 1;
        for(int i = 0; i < len; i++){
            if(tr){ // alice ki chance
                if(num[i]%2==0){
                    globalAns += num[i];
                }
            }
            else{ // bob ki chnace
                if(num[i]%2!=0){
                    globalAns -= num[i];
                }
            }
            tr =! tr;
        }
        if(globalAns == 0) cout << "Tie\n";
        else if(globalAns > 0) cout << "Alice\n";
        else cout << "Bob\n";
    }
    return 0;
}

