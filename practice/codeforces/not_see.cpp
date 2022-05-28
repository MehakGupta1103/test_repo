#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{

    int t;
    cin>>t;

    while(t-->0){
        int n;
        cin>>n;
        if(n==1 || n==3){
            cout<<-1<<endl;
        }else{
            if(n&1){ //5
                cout<<"2 3 5 1 4 ";
                for(int i=6;i<=n;i+=2){
                    cout<<i+1<<" "<<i<<" ";
                }
                cout<<endl;
            }else{
                for(int i=1;i<=n;i+=2){
                    cout<<i+1<<" "<<i<<" ";
                }
                cout<<endl;
            }
        }
    }

}