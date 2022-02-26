#include<bits/stdc++.h>
#define int long long
set<int> subarray;
int findans(int x){
    auto it = subarray.upper_bound(x);
    it--;
    return *it;
}
void remove(int x){
    subarray.erase(x);
}
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;
    int a[n+1];
    for(int i = 1; i < n; i++) cin >> a[i];
    subarray.insert(1);
    for(int i = 2; i <=n; i++){
        if(a[i]%a[i-1]==0) continue;
        subarray.insert(i);
    }
    while(q--){
        int type, i;//lol
        cin >> type >> i;
        if(type==1){
            cin >> a[i]; // update
            if(i>1){
                if((findans(i)==i)&&(a[i]%a[i-1]==0)){
                    remove(i);
                }else if((findans(i)<i)&&(a[i]%a[i-1]!=0)){
                    subarray.insert(i);
                }
            }
            if(i<n){
                if((findans(i+1)>i && ((a[i+1] % a[i]) == 0))){
                    remove(i+1);
                }
                else if((findans(i+1)<=i) && ((a[i+1]%a[i])!=0)){
                    subarray.insert(i+1);
                }
            }
        }
        else{
            cout << findans(i) << endl;
        }
    }
    return 0;
}

//editorial
