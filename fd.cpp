#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin>>t;
    
    for(int i=1;i<=t;i++){
        
        //vector<vector<int>> v;
        int n,r,c,sr,sc;
        cin>>n>>r>>c>>sr>>sc;
        pair<int,int> p;
        map<pair<int,int>,int> m;
        string str;
        cin>>str;
        p=make_pair(sr,sc);
        m[p]=1;
        
        for(int i=0;i<n;i++){
            if(str[i]=='E'){
                
                while(m.find({sr,sc})!=m.end()){
                   ++sc;
                }
                 m[{sr,sc}]=1;
            }
            else if(str[i]=='W'){
                while(m.find({sr,sc})!=m.end()){
                   --sc;
                }
                 m[{sr,sc}]=1;
            }
            else if(str[i]=='N'){
                while(m.find({sr,sc})!=m.end()){
                   --sr;
                }
                 m[{sr,sc}]=1;
            }
            else{
                while(m.find({sr,sc})!=m.end()){
                   ++sr;
                }
                 m[{sr,sc}]=1;
            }
        }
        cout<<"Case #"<<i<<": "<<sr<<" "<<sc<<endl; 
        
    }

}