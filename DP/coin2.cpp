//leetcode - coin 2 challange
// count the number of combinations 


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // int N = 10010;
    int dp[10010];
    int fun(int amount, vector<int> &coins, int count){
        if(amount == 0){
            count ++;
            return 0;
        }
        if(dp[amount] != -1) return dp[amount];
        int ans = INT_MAX;
        for(auto &coin: coins){
            if(amount-coin >= 0)
            ans = min(ans+0LL, fun(amount-coin,coins, count)+1LL);
        }
        return dp[amount] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        int count = 0;
        memset(dp, -1, sizeof(dp));
        int ans = fun(amount, coins, count);
        return count;
        
    }
};