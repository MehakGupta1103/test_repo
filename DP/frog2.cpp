//dp to solve fabonacci 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int h[N];
int k;
int dp[N];
//top down algo

int solve(int i){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int cost = INT_MAX;
    for(int j = 1; j  <= k; j++){
        if(i-j>=0)
            cost  = min(cost, solve(i-j)+abs(h[i]-h[i-j]));
    }
    return dp[i] = cost;
}

int main(){
    int n;
    cin >> n >> k;
    memset(dp, -1, sizeof(dp));
    //o(2^n) --> O(n)
    //the problem is now optimised

    for(int i = 0 ; i < n; i++) cin >> h[i];

    cout << solve(n-1) << endl;
    return 0;
}