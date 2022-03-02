#include <bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main() {
	int num;
	cin >> num;
	while(num--){
		int c, k;
		cin >> c >> k;
		int arr[c];
		for(int i = 0; i < c; i++){
			cin >> arr[i];
		}		
		int sarr[k];
		sort(arr, arr+c, greater<int>());
		for(int i = 0; i < k; i++){
			sarr[i] = arr[i];
		}
		int index = k-1;
		for(int i = k; i < c; i++){
			sarr[index] += arr[i];
			index--;
		}
		int max = 0; 
        for(int i = 0; i < k; i++){
            if(max<sarr[i]) max = sarr[i];
        }
        cout << max << endl;
		
	}
}
