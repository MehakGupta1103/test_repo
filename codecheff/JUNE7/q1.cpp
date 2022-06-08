#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
        int temp = n-6;
        int r = temp/3;
        if(temp%3==0) cout << r + 2 << " " << r + 3 << " " << r + 1 << endl;
        else if(temp%3==1) cout << r + 2 << " " << r + 4 << " " << r + 1 << endl;
        else cout << r + 3 << " " << r + 4 << " " << r + 1 << endl;
	}
	return 0;
}