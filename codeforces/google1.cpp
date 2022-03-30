#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        int maxm = 0, minm = 1e5;
        int min_in, max_in;
        for(int i = 1; i < n+1; i++){
            cin >> arr[i];
            if(minm > arr[i]){
                min_in = i; 
                minm = arr[i];
            }
            if(maxm<arr[i]){
                maxm = arr[i];
                max_in = i;
            }
        }
        int mid = n/2+1;
        // cout << max_in << " " << min_in << " " << mid <<  endl;
        if(max_in <= mid && min_in <= mid){
            cout << max(max_in,min_in);
            // cout << " 1 case " ;
        }
        else if(max_in >= mid && min_in >= mid){
            int temp = max_in;
            if(temp > min_in) temp = min_in;
            cout << n - temp +1 ;
            // cout << " 2 case " ;
        }
        else{
            int mini = min(min_in, max_in);
            int maxi = max(min_in, max_in);
 
            cout << min(min(maxi, n - mini + 1), mini + n - maxi + 1);
        }
        cout << endl;
    }
}