#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;
    int arr[n+1];
    int Sarry[n+1];
    // int subarray = 1;
    // Sarry[1] = 1;
    set<int> pos;
    pos.insert(1);
    for(int i = 2; i <= n; i++){ //one based index
        cin >> arr[i]; 
            if(arr[i]%arr[i-1]==0) continue;
            pos.insert(i);      
    }
    int query, replaceat, replacewith, index;
    for(int i = 0; i < q; i++){
        cin >> query;
        if(query==1){
            cin >> replaceat >> replacewith;
            arr[replaceat] = replacewith;
            pos.insert(i);
            pos.insert(i+1);
            if(arr[replaceat+1]%replacewith==0) pos.erase(replaceat+1);
            if(replacewith%arr[replaceat-1]==0) pos.erase(replaceat);
           
        }
        if(query==2){
            cin >> index;
            auto it = pos.upper_bound(index);it--;
            cout << *it << endl;
        }
    }
    return 0;
}

//editorial
