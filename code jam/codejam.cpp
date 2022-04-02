#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main() {
    int t; cin >> t;
    while(t--){
        cout << "Case #" <<  t+1 << ":" << endl;
        int r, c;
        cin >> r >> c;
        for(int i = 0; i < 2*r+1; i++){
            if(i==0){
                cout << "..";
                for(int j = 0; j < 2*c-1; j++){
                    if(j&1) cout << "-";
                    else cout << "+";
                }
                cout << endl;
            }
            else if(i==1){
                cout << "..";
                for(int j = 0; j < 2*(c)-1; j++){
                    if(j&1) cout << ".";
                    else cout << "|";
                }
                cout << endl;
            }
            else if(i%2==0){
                for(int j = 0; j < 2*c+1; j++){
                    if(j&1) cout << "-";
                    else cout << "+";
                }
                cout << endl;
            }
            else{
                for(int j = 0; j < 2*c+1; j++){
                    if(j&1) cout << ".";
                    else cout << "|";
                }
                cout << endl;
            }
             
        }
    }
	return 0;
}
