#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	    int n; cin >> n;
	    int a[n], b[n];
	    for(int i = 0; i < n; i++) cin >> a[i];
	    for(int i = 0; i < n; i++) cin >> b[i];
	    int i = 0, j = 0;
	    while(i < n && j < n){
	    	int diff = b[j]-a[i];
	    	if(diff >= 0){
	    		cout << diff << " ";
	    		i++;
	    	}
	    	else j++;
	    }	
	    cout << endl;
	    int ans[n];
	    int k = n-1;
	    i = n-1, j = n-1;
	    while(i >= 0 && j >= 0){
	    	int diff = b[j]-a[i];
	    	ans[k] = diff; k--;
	    	if(a[i] > b[i-1]){
	    	    i--; j--;
	    	}
	    	else i--;
	    }
	    for(int p = 0; p < n; p++) cout << ans[p] << " ";
	    cout << endl;
	}
	return 0;
}
