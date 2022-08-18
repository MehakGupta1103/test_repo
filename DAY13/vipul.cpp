#include <bits/stdc++.h> 
using namespace std; 
#define int long long  

void ans(){ 
    int n,q; 
    cin>>n>>q; 
    vector<int>v(n);
    for(int i =0;i<n;i++){ 
        cin>>v[i]; 
    } 

    int pref_max[n]; 
    pref_max[0] = v[0]; 
    for(int i = 1;i<n;i++){ 
        pref_max[i]= max(pref_max[i-1],v[i]); 
    } 

    while(q--){ 
        int a,k;
        cin>>a>>k; 
        int m = a - 1;
        int d = 0;

        if(pref_max[m]!=v[m]){ 
            cout<<0<<"\n"; 
        }else{ 
            int upper = upper_bound(pref_max,pref_max+n, v[m])-pref_max; 
            if(pref_max[m]==pref_max[n-1]){ 
                if(m==0){ 
                    cout<<max(d, k)<<"\n";     
                }else{ 
                    cout<<max(d, k-m+1)<<"\n"; 
                } 
            }else{ 

                if(m!=0) 
                    k-=(m-1); 
                cout<<max(d,min(k, (m!=0) + upper-m-1))<<"\n"; 
            } 
        } 
    } 

}    

int32_t main(){ 

    int t;
    cin>>t; 

    while(t--){  
        ans(); 
    } 
}