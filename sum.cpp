#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	     int n; cin >> n;
	     int a[n];
	     for(int i = 0; i < n; i++) cin >> a[i];
	     int temp;
	     for(int i = n-2; i >= 0; i--){
	         temp = a[i+1]/2;
	         if(temp < 0);
	         else if(temp >= abs(a[i])){
	             a[i+1] -= 2*a[i];
	             a[i] = 0;
	         }
	         else{
	             if(a[i+1]==1){
	                 if(a[i]>0) a[i] -= 1;
	             }
	             else{
	                 cout << abs(a[i]-temp)+abs(a[i+1]-2*temp) <<" " << abs(a[i])+abs(a[i+1]) << endl;
	                 if(abs(a[i]-temp)+abs(a[i+1]-2*temp) < abs(a[i])+abs(a[i+1])){
	                     cout << "chala" << endl;
	                     a[i] -= temp;
	                     a[i+1] -= temp*2;
	                 }
	             }
	         }
	         
	     }
	     int ans = 0;
	     for(int i = 0; i < n; i++){
	         cout << a[i] << " ";
	         ans += abs(a[i]);
	     }
	     cout << endl;
	     cout << ans << endl;
	    
	}
	return 0;
}
