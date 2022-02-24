#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int len;
        cin >> len;
        vector<int> v(len);
        for(int i = 0; i < len; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int minm = 10e9;
        int index;
        for(int i = 0; i < len; i++){
            if(minm > abs(v[i]-v[i+1])){
                minm = abs(v[i]-v[i+1]);
                index = i;
            }
        }
        cout << v[index] << " ";
        for(int i = index+2; i < len; i++){
            cout << v[i] << " ";
        }
        for(int i = 0; i < index; i++){
            cout << v[i] << " ";
        }
        cout << v[index+1] << " ";
        cout << endl;
    }
    return 0;
}