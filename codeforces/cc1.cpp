#include <bits/stdc++.h>
#define int long long
using namespace std;

// vector<int> p1;
// vector<int> p2;
// vector<int> p3;
// vector<int> p4;
// vector<int> p5;
// vector<int> p6;
// vector<int> p7;
// vector<int> p8;
// vector<int> p9;
// vector<int> p10;
// vector<int> p12;
// vector<int> p13;
// vector<int> p14;
// vector<int> p15;
// vector<int> p16;
// vector<int> p17;
// vector<int> p18;
// vector<int> p19;
// vector<int> p20;
// vector<int> p21;
// vector<int> p22;
// vector<int> p23;
// vector<int> p24;
// vector<int> p25;
// vector<int> p26;
// vector<int> p27;
// vector<int> p28;
// vector<int> p29;
// vector<int> p30;
// vector<int> p31;
// vector<int> p32;



int32_t main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
        vector<vector<int>> p0(32);

	        int n; cin >> n;
	        int arr[n];
	        for(int i = 0; i < n; i++){
	            cin >> arr[i];
	        }
            int m, index;
            for(int i = 0; i < n; i++){
                 m = i;
	             index = log2(arr[i]);
                // cout << index << endl;
	            p0[index].push_back(m);
	        }
            int ans = 0; 
            for(int i = 0; i < 32; i++){
                int len = p0[i].size();
                if(len>1){
                    ans += len*(len-1)/2;
                }
            }
	    cout << ans << endl;
	}
	return 0;
}
