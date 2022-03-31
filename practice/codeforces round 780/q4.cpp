#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
     
	int t;
	cin >> t;
	while(t--){
        int n; cin >> n;
        int arr[n];
        int count = 0;
        vector<int> neg;
        vector<int> zero;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i]<=0){
                count++;
                neg.push_back(i);
            }
            if(arr[i]==0) zero.push_back(i);
        }
        if(zero.size()==0){
            int temlen = neg.size();
            sort(neg.begin(), neg.end());
            if(!(neg.size()&1)){
                cout << 0 << " " << 0 << endl;
            }
            else{
                int p1 =1, p2 =2;
                for(int i = 0; i < neg[0]; i++) p1 *= arr[i];
                for(int i = n-1; i > neg[temlen-1]; i--) p1 *= arr[i];
                if(p1>p2) cout << 0 << " " << 
            }
        }
	}
	return 0;
}
