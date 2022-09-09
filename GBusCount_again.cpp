#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	for(int itr = 1; itr <= t; itr++){
		int n; cin >> n;
		int arr[2*n];
		for(int i = 0; i < 2*n; i++){
			cin >> arr[i];
		}

		int hsh[6010];
		for(int i = 0; i < 6010; i++) hsh[i] = 0;

		for(int i = 0; i < 2*n; i += 2){
			for(int j = arr[i]; j <= arr[i+1]; j++) hsh[j]++;
		}
		int x;
		int q; cin >> q;
		cout << "Case #" << itr << ": ";
		while(q--){
			cin >> x;
			//
			cout << hsh[x] << " ";
		}	
		cout << endl;	
	}
}