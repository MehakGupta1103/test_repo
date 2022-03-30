#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n; cin >> n;
	    int arr[n+1];
	    for(int i = 1; i < n+1; i++){
	        cin >> arr[i];
            // cout << " the i th index " << i << endl;
	    }
	    sort(arr+1, arr+n+1);
	    for(int i = n; i> (n+1)/2; i--){
	        cout << arr[i] << " " << arr[1] << endl;
	    }
        // cout << "next test case " << endl;
	}
	return 0;
}
