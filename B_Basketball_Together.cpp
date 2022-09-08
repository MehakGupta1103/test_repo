#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
using namespace std;

const int N = 1e3;
  
int32_t main(){
   int n, d;
   cin >> n >> d;
   int arr[n];
   for(int i = 0; i < n; i++) cin >> arr[i];
   sort(arr, arr+n);
   int i = 0, j = n-1;
    int count = 0;
    int current_mem = 1;
    while(i < n && j >= 0 && j > i){
        // cout << i << " " << j << endl;
        // cout  << arr[j] << " " << d << endl;
        if(arr[j] > d){
            count++;
            j--;
            current_mem = 1;
        }
        else{
            current_mem++;
            i++;
            if(arr[j]*current_mem > d){
                count++;
                current_mem = 1;
                j--;
            }
        }
        // cout << " count " << count << endl;
    }
    if( i == 0 && arr[i] > d) count++;
    cout << count << endl;
   return 0;
}