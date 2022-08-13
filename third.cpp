#include<bits/stdc++.h>

#define loop(i, start, end) for(int i = start; i < end; i++)

using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    loop(i, 0, n) cin >> arr[i];
    int sum = 0;
    loop(i, 0, n/2){
        sum = arr[i] + arr[n-i-1];
        cout << sum/10 << " " << sum%10 << endl;
    }
    return 0;
}