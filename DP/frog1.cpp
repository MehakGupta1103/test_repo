//dp to solve fabonacci 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int h[N];
int dp[N];
//top down algo

int solve(int i){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int cost = INT_MAX;
    cost = min(cost, solve(i-1)+abs(h[i]-h[i-1]));
    if(i>1) 
        cost = min(cost, solve(i-2)+abs(h[i]-h[i-2]));
    return dp[i] = cost;
}

int main(){
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    //o(2^n) --> O(n)
    //the problem is now optimised

    for(int i = 0 ; i < n; i++) cin >> h[i];

    cout << solve(n-1) << endl;
    return 0;
}