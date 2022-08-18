#include<bits/stdc++.h>

// #define loop( i, start, end) for(int i = start; i < end; i++)

using namespace std;

int binary_compute(int start, int end, int arr[], int k, int size){
    cout << start << " " << end << endl;
    if(start > end) return start-1;
    if(start == end ) return start; 
    int mid = (start+end)/2;
    int ans;
    int n = size;
    for(int i = 0; i < n; i++){
        ans += arr[i]/mid;
    }

    if(ans >= k) binary_compute(mid, end, arr, k, n);
    binary_compute(start, mid, arr, k, n);
    
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; 
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n, greater<int>());
        int min = 0, maxm = arr[0];
        int tmep = binary_compute(0, n, arr, k, n);
        cout << tmep << endl;
    }
    return 0;
}