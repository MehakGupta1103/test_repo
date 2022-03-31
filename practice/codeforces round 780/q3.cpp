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
        string s; cin >> s;
        int len = s.length();
        int hsh[26] = {0};
        int ans = len;
        for(int i = 0; i < len; i++){
            int alfa = s[i]-'a';
            if(hsh[alfa]){
                ans -= 2;
                for(int j = 0; j < 26; j++){
                    hsh[j] = 0;
                }
            }
            else{
                hsh[alfa] = 1;
            }
        }
        cout << ans << endl;
    }
	return 0;
}
