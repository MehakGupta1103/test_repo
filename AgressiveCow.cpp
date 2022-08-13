#include<bits/stdc++.h>

#define loop(i, start, end) for(int i = start; i < end; i++)

using namespace std;

bool check(int arr[], int dis, int size, int NoOfCows){
    int count = 1;
    loop(i, 1, size){
        if((arr[i]-arr[i-1]) >= dis ) count++;
    }
    if(count >= NoOfCows) return true;
    return false;
}

int search(int arr[], int start, int end, int arr_size, int no_of_cows){
    if(start > end ){
        cout << " start - " << start << " end - " << endl;
        return start;
    }
    int mid = (start+end ) / 2;
    if(check(arr, mid, arr_size, no_of_cows)) search(arr, mid+1, end, arr_size, no_of_cows);
    else search(arr, start, mid-1, arr_size, no_of_cows);
}

int main(){
   int t; cin >> t;
   while(t--){
    int n, cows;
    cin >> n >> cows;
    int arr[n];
    loop(i, 0, n) cin >> arr[i];
    sort(arr, arr+n);
    int ans = search(arr, arr[0], arr[n-1], n, cows);
    cout << ans << endl;
   }
}