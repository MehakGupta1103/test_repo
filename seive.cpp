#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;

int hsh[N];
int ct_multiples[N];

int32_t main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; ++i){
        int z;
        cin>>z;
        hsh[z]++;
    }
    for(int i = 1; i<N; ++i){
        for(int j = i; j<N; j+=i){
            ct_multiples[i] += hsh[j];
        }
    }
    int t;
    cin>>t;
    while(t--){
        int p,q;
        cin>>p>>q;
        long long cm = p*1LL*q / __gcd(p,q);
        long long ans = ct_multiples[p] + ct_multiples[q];
        if(cm<N){
            ans = ans - ct_multiples[cm];
        }
         cout<<ans<<"\n";
    }
    return 0;
}