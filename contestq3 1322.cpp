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
	       for(int i = 0; i < n; i++){
	           cin >> arr[i];
	       }
	       sort(arr, arr+n, greater<int> ());
	       int temp1 = 0;
	       int temp2 = 0;
	       for(int i = 0; i < n; i++){
               cout << " temp1 " << temp1 << " temp2 " << temp2 << endl;
	           if(temp2>temp1) temp1+=arr[i];
	           else if(temp1>temp2) temp2+=arr[i];
	           else temp1+=arr[i];
	       }
	       cout << max(temp1, temp2) << endl;
	}
	return 0;
}
