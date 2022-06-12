// codeforces wow maximums 

#include<bits/stdc++.h>
using namespace std;
//ll iint
 int a[1000001], b[1000001];
int main() {
    
	string s; cin >> s;
    int n = s.length();
    // cout << s << n << endl;
    a[0] = 0;
	for(int i=1; i<n; i++) a[i] = a[i-1] + (s[i] == 'v' && s[i-1] == 'v');
    // for(int i=1; i<=n; i++) cout << a[i] << " ";
	b[n] = 0;
	for(int i=n-1; i>0; i--) b[i] = b[i+1] + (s[i] == 'v' && s[i-1] == 'v');
	
    // for(int i=1; i<=n; i++) cout << a[i] << " ";
    // cout << endl;
    // for(int i=1; i<=n; i++) cout << b[i] << " ";
	// cout << endl;
	int ans = 0;
	for(int i=0; i<n; i++) {
		if(s[i]=='o'){
            ans += a[i+1] *1LL* b[i+1];
        }
	}
	cout << ans << endl;
	return 0;
}