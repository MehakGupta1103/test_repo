#include<bits/stdc++.h>

#define l(i, start, end) for(int i = start; i < end; i++)

using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    l(i, 0, n) cin >> arr[i];
    int min = arr[0], maxi = arr[0], ans = 0;
    l(i, 1, n){
        if(arr[i] > arr[i-1]) maxi = arr[i];
        else{
            ans = max(ans, maxi - min);
            min = arr[i];
            maxi = min;
        }
    }
    cout << ans << endl;
    return 0;
}