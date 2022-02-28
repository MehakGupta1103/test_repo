#include <bits/stdc++.h>

using namespace std;

int main() {
	int num;
	cin >> num;	
	vector<int> pos;
	while(num--){
		int l, r;
		cin >> l >> r;
		
		for(int i = 0; i < 32; i++){
			int zcnt = 0;
			for(int j = l; j <= r; j++){
                cout << ( j & (1<<i) )<< "## " << endl;
				if( j & (1<<i) );
				else zcnt++;
			}
			pos.push_back(zcnt);
		}
		int ans = *min_element(pos.begin(), pos.end());
		cout << ans << endl;
	}									
}

