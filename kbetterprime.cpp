#include<bits/stdc++.h>
using namespace std;

void solve(){
    int primediv[100001];
    primediv[1]=0;
    for(int i = 1; i <= 100000; i++){
        int x = i;
        for(int j =2; j*j<=x;j++){
            if(x%j==0){
                while(x%j==0){
                    x/=j;
                }
                primediv[i]=1+primediv[x];
                break;
            }
        }
        if(x>1){
        primediv[i]=1;
    }
    }
    
}


//
/**
 * @brief 
 * #define fast_cin() ios_base::sync_with_stdio(false); 
 * cin.tie(NULL); cout.tie(NULL)
 * 
 * @return * int 
 *
{
    fast_cin();
    
    vector<int> vec(100001,0);
    for(int i=2;i<100001;i++){
        if(vec[i]==0){
            for(int j=i;j<100001;j=j+i){
                vec[j]+=1;
            }
        }
    }
    
    
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
    
        int a,b,k;
        cin>>a>>b>>k;
        int c=0;
        for(int i=a;i<=b;i++){
            if(vec[i]==k) c++;
        }
        cout<<c<<"\n";
    
        
    }
    return 0;
    **/