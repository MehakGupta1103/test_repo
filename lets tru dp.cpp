#include <bits/stdc++.h>

using namespace std;

int main() {
	int num;
	cin >> num;	
	
	while(num--){
		int l, r;
		cin >> l >> r;
		vector<int> pos;
		for(int i = 0; i < 32; i++){
            int zcnt = 0;
            
            cout << i << " ehis is the index \n"; 
			for(int j = l; j <= r; j++){
            
				if( j & (1<<i) ){
                    // cout << ( j & (1<<i) )<< "## " << endl;
                }
				else {                    
                    // cout << ( j & (1<<i) )<< "$$ " << endl;
                    zcnt++;}
			}
            cout << zcnt << " zcnt \n";
			pos.push_back(zcnt);
		}
		int ans = *min_element(pos.begin(), pos.end());
		cout << ans << endl;
	}									
}

// 4
// 1 2
// 2 8
// 4 5
// 1 5

// 1
// 3
// 0
// 2