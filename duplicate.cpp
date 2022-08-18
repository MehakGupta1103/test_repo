#include<bits/stdc++.h>

#define loop(i, start, end) for(int i = start; i < end; i++)

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        loop(i, 0, n) cin >> arr[i];
        int temp = (n-2)*(n-1)/2;
        int sum = 0; 
        loop(i, 0, n) sum += arr[i];
        cout << sum-temp << endl;
    }
    return 0;
}