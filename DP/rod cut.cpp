#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int dp[1002];
int func(int len, vector<int> &prices){
    int ans = 0;
    if(len==0) return 0; 
    for(int len_to_cut = 1; len_to_cut <= prices.size(); len_to_cut++){
        if(len - len_to_cut >= 0){
            ans = max(ans, func(len-len_to_cut, prices)+prices[len_to_cut-1]);
        }
    }
    return ans;
}
int cutRod(int price[], int n){
    vector<int> prices(price, price+n);
    return func(n, prices);
}