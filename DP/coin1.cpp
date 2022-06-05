//coin change problem -- leetcode
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // int N = 10010;
    int dp[10010];
    int fun(int amount, vector<int> &coins){
        if(amount == 0) return 0;
        if(dp[amount] != -1) return dp[amount];
        int ans = INT_MAX;
        for(auto &coin: coins){
            if(amount-coin >= 0)
            ans = min(ans+0LL, fun(amount-coin,coins)+1LL);
        }
        return dp[amount] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        
        memset(dp, -1, sizeof(dp));
        int ans = fun(amount, coins);
        return ans == INT_MAX ? -1: ans;
    }
};