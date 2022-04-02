#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int n, a, b;
    cin >> n >> a >> b;
    int diff = abs(a-b);
    // cout << diff << "the diff " << endl;
    if((diff<1) || (diff>2)){
        cout << 0 << endl;
        return ;
    }
    int count = 0;
    if(diff==1){
        if(a>1 && b>1) count++;
        if(a<n && b<n) count++;
    }
    else{
        count++;
    }
    cout << count << endl;
    return ;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	        solve();
	    
	}
	return 0;
}
