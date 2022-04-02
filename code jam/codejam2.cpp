#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    for(int k = 1; k < t+1; k++){
        cout << "#" << k << ": ";
        int arr[3][4] = {0};
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 4; j++){
                cin >> arr[i][j];
            }
        }

        int sum = 0; 
        int minarr[4] = {100000007,100000007,100000007,100000007};
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 3; j++){
                minarr[i] = min(minarr[i], arr[j][i]);
            }
            sum += minarr[i];
        }

        int flag = 1;
        if(sum<1e6){
            cout << "IMPOSSIBLE" ;
            flag = 0;
        }

        // for(int i = 0; i < 4; i++) cout << minarr[i] << " " ;
        // cout << endl;
        if(flag){
            sum = 0;
            int temp = 0;
            for(int i = 0; i < 4; i++){
                sum += minarr[i];
                if(sum>1000000){

                    temp = sum-1000000;
                    //cout << endl << temp <<  " " << sum << endl;
                    cout << minarr[i]-temp << " ";
                    for(int j = i+1; j < 4; j++){
                        cout << 0 << " " ;
                    }
                    break;
                }
                cout << minarr[i] << " ";
            }
        }
        // cout << sum << endl;
        cout << endl;
    }
}