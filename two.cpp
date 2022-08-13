#include<bits/stdc++.h>

#define loop(i, start, end) for(int i = start; i < end; i++)

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n][n];
        loop(i, 0, n){
            loop(j, 0, n){
                cin >> arr[i][j];
            }
        }
        int sum = 0; 
        loop(i, 0, n){
            sum += (arr[0][i] + arr[i][0]) ;
            // cout << sum << endl;
        }
        loop(i, 1,n){
            sum += (arr[n-1][i] + arr[i][n-1]);
            // cout << sum << endl;
        }
        loop(i, 1, n-1){
            // cout << i << " # " << endl;
            sum += arr[i][i] + arr[i][n-i-1];
            // cout << arr[i][i]<<" "<<arr[i][n-i-1] << endl;
        }
        sum -= (arr[0][0] + arr[n-1][n-1] );
        if(n&1) sum -= arr[n/2][n/2];
        cout << sum << endl;
    }
    return 0;
}