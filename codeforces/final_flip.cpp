#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
        int n; cin >> n;
        string s; cin >> s;
        multimap<int, int> data;
        for(int i = n-1; i >= 0; i--){

            if(s[i]=='0'){
                cout << i << " i and n-i " << n-1 << endl;
                // data[1] = n-i-2;
                data.insert({1, n-i-2});
                for(int j = 0; j <= i; j++){
                    if(s[j] == '1') s[j] = '0';
                    else s[j] = '1';
                }
            }
        }
        cout << data.size() << endl;
        for(auto &it: data) cout << it.first << " " << it.second << endl;
	}
	return 0;
}
