#include <bits/stdc++.h>
// #define int long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	    int n, m, x, y, d;
	    cin >> n >> m >> x >> y >> d;
	    if( (x+d >= n && y+d >= m) || (x-d <= 1 && y-d <= 1) || 
	    	(x+d >= n && x-d <= 1) || (y+d >= m && y-d <= 1)){
	    	cout << "-1" << endl;
	    }
	    else cout << n+m-2 << endl;
	}
	return 0;
}
