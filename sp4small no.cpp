#include<bits/stdc++.h>
// #define int long long
using namespace std;

bool isPrime(int n){
    int c = 0; 
    for(int i = 1; i < n+1; i++){
        c++;
    }
    return c==2;
}

int main(){
    set<int> primes;
    for(int i =1; i < 202; i++){
        if(isPrime(i)) primes.insert(i);
    }
    set<int> semi;
    for(auto &e: primes){
        for(auto &f: primes){
            if(e==f) continue;
            else semi.insert(e*f);
        }
    }
    set<int> sums;
    for(auto &e: semi){
        for(auto &f: semi){
            sums.insert(e+f);
        }
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(sums.find(n)==sums.end()) cout << "NO";
        else cout << "YES" << endl;
    }
}