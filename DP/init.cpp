//dp to solve fabonacci 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

int dp[N];
//top down algo

int fab(int n){
    // cout << n << endl;
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    //^--> memoise
    return dp[n] = fab(n-1)+fab(n-2);
}

int main(){
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    //o(2^n) --> O(n)
    //the problem is now optimised
    for(int i = 0; i < 10; i++) cout << fab(i) << endl;
}