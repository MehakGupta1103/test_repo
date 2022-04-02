#include<bits/stdc++.h>
#define int long long
using namespace std ;

void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    int arr[n];

    if(abs(a-b)>1){
        cout << -1 << endl;
        return ;
    }
    if(a+b>n-2){
        cout << -1 << endl;
        return ;
    }
    
    else{

        for(int i = 1; i <= n; i++){
            arr[i-1] = i;
        }
        if(a<b){
            for(int i = 0; i < n; i+=2){
                if(b<=0) break;
                if(i+1<n)
                swap(arr[i],arr[i+1]);
                b--;
                if(b<=0) break;
            }
        }
        else if(a>b){
            sort(arr, arr+n, greater <int>());
            for(int i = 0; i < n; i+=2){
                if(a<=0) break;
                if(i+1<n)
                swap(arr[i],arr[i+1]);
                a--;
                if(a<=0) break;
            }
        }
        else{
            for(int i = 1; i < n; i+=2){
                if(b<=0) break;
                if(i+1<n)
                swap(arr[i],arr[i+1]);
                b--;
                if(b<=0) break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
/**
 for j in range(int(input())):
    n=int(input())
    
    
    def digSum(n):
     
        if (n == 0):
            return 0
        if (n % 9 == 0):
            return 9
        else:
           return (n % 9)
    
    x=9-digSum(n)
    s=str(n)
    ans=s+str(x)
    for i in range( 0 , len(s)):
        temp=s[0:i]+str(x)+s[i:len(s)]
        if(temp[0] == '0'):
            continue
        ans=min(temp,ans)
        **/