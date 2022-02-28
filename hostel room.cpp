#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, q;
	cin >> n >> m >> q;
	int h[n][2];
	for(int i = 0; i < n; i++){
		h[i][0] = 0;
		h[i][1] = 0;
	}

	while(m--){
		string roll; cin >> roll;
		int roo; cin >> roo;
		int yr = 0;
		stringstream k(roll.substr(3,4));
		k >> yr;
		
		roo = roo - 1;
		if(h[roo][0] > 0){
			h[roo][1] = yr;
		}
		else{
			h[roo][0] = yr;
		}

	}

	while(q--){
		int c = 0;
		int y, start, end; 
        cin >> y >> start >> end;
		for(int i = start-1; i < end; i++){
			if(h[i][0]==y){ 
				c++;
				//cout << y << " - " << i << endl;
			}
			if(h[i][1]==y){
				c++;
				//cout << y << " - " << i << endl;
			}
		}

		cout << c << endl;
	}

	// for(int i = 0; i < n; i++){
	// 	cout << h[i][0] << " " << h[i][1] << endl;
	// }
}