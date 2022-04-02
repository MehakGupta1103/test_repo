#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    for(int k = 1; k < t+1; k++){
        cout << "Case#" << k << ": ";
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int dice = 1;
        for(int i = 0; i < n; i++){
            if(dice<=arr[i]) dice++;
        }
        cout << dice-1 << endl;
    }
    return 0;
}