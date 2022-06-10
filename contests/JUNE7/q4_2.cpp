#include<bits/stdc++.h>
#define int long long
using namespace std;


// O(n*k) solution for finding maximum sum of
// a subarray of size k
#include <bits/stdc++.h>
using namespace std;

// Returns maximum sum in a subarray of size k.
int maxSum(vector<int>& arr, int n, int k)
{
	// Initialize result
	int max_sum = INT_MIN;

	// Consider all blocks starting with i.
	for (int i = 0; i < n - k + 1; i++) {
		int current_sum = 0;
		for (int j = 0; j < k; j++)
			current_sum = current_sum + arr[i + j];

		// Update result if required.
		max_sum = max(current_sum, max_sum);
	}

	return max_sum;
}




int32_t main(){
	int t; cin >> t;
	while(t--){
		int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> b;
        int count;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B') count++;
            else{
                b.push_back(count);
                count = 0;
            }
        }
        if(count != 0) b.push_back(count);
        sort(b.begin(), b.end(), greater<int> ());
        if(k <= b[0]){
            cout << 0 << endl;
            return;
        }
        vector<int> ele;
        int bc = 0, wc = 0;
        if(s[0] == 'B') bc++;
        else wc++;
        
        for(int i = 1; i < n; i++){
            if(s[i] == 'B'){
                bc++;
                if(s[i-1] == 'W'){
                    ele.push_back(wc);
                    wc=0;
                }
            else{
                wc++;
                if(s[i-1] == 'B'){
                    ele.push_back(bc);
                    bc=0;
                }
            }
        }
        if(bc!=0) ele.push_back(bc);
        if(wc!=0) ele.push_back(wc);
        // int ans1 = 0;
        // for(int i = 0; i < ele.size()-3; i++){
        //     ans1 = max(ele[i]+ele[i+1]+ele[i+2], ans1);
        //     if(ans1 >= k) cout << ele[i+1] << endl;
        //     break;
        // }
	int n = sizeof(ele) / sizeof(ele[0]);
	cout << maxSum(ele, n, 3);
	}
	return 0;
}