#include <bits/stdc++.h>
#define int long long 
const int N = 2*1e5;
using namespace std;
int arr[N];
int32_t main() {

	int count = 0;
	for(int i = 0; i <= N; i++){
		if(i&1) arr[i]=count;
		else{
			count++;
			arr[i]=count;
		}
	}

	int num;
	cin >> num;	
	
	while(num--){
		int l, r;
		cin >> l >> r;
		
		cout << arr[r]-arr[l] << endl;
	}									
}

