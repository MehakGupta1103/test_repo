#include<bits/stdc++.h>

#define loop(i, start, end) for(int i = start; i < end; i++)

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        loop(i, 0, n) cin >> arr[i];
        sort(arr, arr+n, greater<int>());
        int reqd = 0;
        loop(i, 0, n){
            reqd += arr[0] - arr[i];
        }
        int ans = 0;
        if(reqd == 0) cout << 0 << endl;
        else{
            int avail = 0;
            loop(i, 1, n){

                avail += arr[i-1];
                reqd -= (n-i)*(arr[i-1]-arr[i]);

                if(avail >= reqd){
                    ans = i;
                    break;
                }
            }
            cout << ans << endl;
        }
        
    }
}