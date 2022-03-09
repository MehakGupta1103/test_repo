#include<bits/stdc++.h>
// #define int long long
#define ll long long
const ll m = 1e9;
using namespace std;


//binary exponentiation --> recursive method --> but this will not run for O(n)
int solve1(int a, int b){
    //base
    int result = 1;
    
    if(b<1) return result;
    if(b&1)  result = a*solve1(a,b/2)*solve1(a,b/2);
    else result = solve1(a,b/2)*solve1(a, b/2);
}


//binary exponentiation --> recursive method --> but this will run for O(logn)
int solve2(int a, int b){
    //base
    if(b<1) return 1;

    int result = solve2(a, b/2);  //* --> run only once
    if(b&1) return a*(result*result)%m;
    else return result*result;
}

//binary exponentiation --> iterative method --> but this will run for O(log(power))
int solve3_again(int power, int num){
    int result = 1;
    while(power){
        if(power&1){
            result = (num*1ll*result)%m;
        }
        num = (num*num)%m;
        power>>=1;
    }
    return result;
}

//binary exponentiation --> when the value of a is very large : a>m
//#define int long long --> take a%m in the very begining
int solve3(int a, int b){
    a %= m;

    //base
    if(b<1) return 1;

    int result = solve2(a, b/2);  //* --> run only once
    if(b&1) return a*(result*result)%m;
    else return result*result;
}

//! line alert
////binary exponentiation --> when the value of a is very large : a>m
//what the hell was that wow
/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return int 
 */
//*  my method

//binary exponentiation --> when the value of modulo is very large : result*result gets overflowed
//need a different section for multiplication
int multiply(int a, int b){
    int result = 0;
    while(b>0){
        if(b&1){
            result = (result+a)%m;
        }
        a = (a+a)%m;
        b>>=1;
    }
    return result;
}
int solve4(int a, int b){

    //base
    if(b<1) return 1;

    int result = solve2(a, b/2);  //* --> run only once
    if(b&1) return a*multiply(result, result)%m;
    else return multiply(result, result);
}

//binary exponentiation --> when the value of power is very large : a^(b^c)
//eular toitent function
int exponentition(int a, int b, int mod){
    a %= mod;
    int ans = 1;
    while(b>0){
        if(b&1){
           ans = (ans*1LL*a)%mod; 
        }
        a = (a*1LL*a)%mod;
        b>>=1;
    }
    
}
int superpower(int a, vector<int> &b){
    int bmod = 0;
    for(int val: b){
        bmod = (bmod*10 + val)%1140;
    }
    return exponentition(a, bmod, 1337) ;
}


//greatest common divisor
int gcd(int a, int b){ 
//! base
    if(b%a==0) return a;

    return gcd(b%a,a);
}
//
int32_t main(){
    // cout << gcd(6,36);
    // cout << " the efxpsfoief" << solve(2,3) << "$$$$$$$$$" << solvee(2,3);
    //cout << " the iterative method " << solveee(2,3);
    return 0;
}