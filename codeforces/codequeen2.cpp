#include <bits/stdc++.h>
#define int long long 

using namespace std;

int32_t main() {
	int t; cin >> t; 
	while(t--){
		int n, k;
		cin >> n >> k;
		int arr[n];
		for(int  i = 0; i < n; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		int sum = 0;
		for(int i = k-1 ; i < n; i++){
			sum += arr[i];
		}
		cout << sum << endl;
	}
}
