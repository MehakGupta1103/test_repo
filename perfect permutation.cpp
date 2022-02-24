#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> temp;
    for(int i = 1; i <= n; i++){
        temp.push_back(i);
    }
    if(n == 1){
        cout << 1 << endl;
        return;
    }
    if(k == n-1){
        swap(temp[0], temp[1]);
        for(auto &it: temp) cout << it << " ";
        cout << endl;
        return;
    }
    int sw = 0;
    k = n-k;
    while(k--){
        swap(temp[sw], temp[sw+1]);
        sw++;
    }
    for(auto &it: temp) cout << it << " ";
    cout << endl;
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}



/***

#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	        int n, k;
	        cin >> n >> k;
	        for(int i = 1; i <= k; i++){
	            cout << i << " ";
	        }
	        int num = n;
	        stack<int> temp;
	        for(int i = k+1; i <= n; i++){
	            if(num%i == 0){
	                temp.push(num);
	            }
	            else{
	                cout << num << " ";
	                while(!temp.empty()){
	                    cout << temp.top() << " ";
	                    temp.pop();
	                }
	            }
	            num--;
	        }
		cout << endl;
    
	}
	return 0;
}
***/