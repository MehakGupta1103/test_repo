#include <bits/stdc++.h>
#define int long long
using namespace std;
const int m = 1e9+10;
const int lo = 1e5+10;
int fact[lo];

int32_t main() {
     
	int t;
	cin >> t;
	while(t--){
        int a, b;
        cin >> a >> b;
        if(a == 0) cout << 1 << endl;
        else{
            int temp = a + 2*b + 1;
            cout << temp << endl;
        }
	}
	return 0;
}
