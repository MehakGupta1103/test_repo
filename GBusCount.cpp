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
		for(int i = 0; i < 2*n; i += 2) m[arr[i]] = arr[i+1];

		int hsh[5010];
		for(int i = 0; i < 5010; i++) hsh[i] = 0;

		for(auto &it: m){
			hsh[it.first]++;
			hsh[it.second +1]--;
		}

		// cout << "hash array" << endl;
		// for(int i = 0; i < 501; i++) cout << hsh[i] << " ";
		// 	cout << endl;

		for(int i = 1; i < 5010; i++){
			hsh[i] += hsh[i-1];
		}

		int q; cin >> q;
		int x;
		int count = 0;
		cout << "Case #" << itr << ": ";
		while(q--){
			cin >> x;
			//
			cout << hsh[x] << " ";
		}	
		cout << endl;	
	}
}