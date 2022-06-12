// codeforces #145 --> weather

#include<bits/stdc++.h>
using namespace std;
 
int n, k;
int a[100000+50];
int b[100000+50], c[100000+50];
 
int main() {
	int n; cin >> n;
	for(int i=1; i<=n; i++) cin >> a[i];
	b[0] = 0;
	for(int i=1; i<=n; i++) b[i] = b[i-1] + (a[i] >= 0);
	c[n+1] = 0;
	for(int i=n; i>=1; i--) c[i] = c[i+1] + (a[i] <= 0);
	
	int ans = n;
	for(int i=1; i<n; i++) {
		int v = b[i] + c[i+1];
		if(v < ans) ans = v;
	}
	printf("%d\n", ans);
	return 0;
}