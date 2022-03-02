#include <bits/stdc++.h>
#define int long long
using namespace std;

int binexp(int a, int b, int m){
	int result = 1;
	while(b>0){
		if(b&1){
			result = (result*1LL*a)%m;
		}
		a = (a*1LL*a)%m;
		b >>= 1;
	}
	return result;
}

int32_t main() {
	int n, p, b;
	cin >> n >> p >> b;
	vector<int> num(n);
	for(auto &it: num){
		cin >> it;
	}
	// for(auto &it: v) cout << it << "###" << endl;
	if(b>=p) cout << 0 << endl;
	else{
        map<int,int> var;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(!var.empty() && var.find(num[i])!= var.end()){
                ans += var[num[i]];
            }
        	int z = (b*(binexp(num[i],p-2,p)))%p;
            var[z]++;
        }cout << ans << endl;
    }
    
	return 0;
}

