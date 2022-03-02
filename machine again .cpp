#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	       int n;
	       cin >> n;
	       int arr[n];
	       int sum = 0;
	       for(int i = 0; i < n; i++){
	           cin >> arr[i];
	           sum += arr[i];
	       }
	       int ans, diff=1e5;
	       int temp1=0, famp;
	       for(int i = 0; i < n; i++){
	           temp1 += arr[i];
	           famp = sum - temp1;
               if(temp1>famp){
                    if(diff>temp1-famp){
                        diff = temp1-famp;
                        ans = temp1;
                    }
               }
               else{
                   if(diff>famp-temp1){
                        diff = famp-temp1;
                        ans = famp;
                    }
               }
	       }
           cout << ans << endl;
	}
	return 0;
}
