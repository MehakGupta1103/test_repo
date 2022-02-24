#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin >> n;
    int array[n]; //1 ( and 2 for )
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int index = 0;
    int ans = 0;
    int temp = 0;
    for(int i = 0; i < n; i++){
        if(array[i] == 1){
            ans++;
        }
        else{
            ans--;
        }
        if(temp < ans){
            temp = ans;
            index = i+1;
        }
        
    }
    int count = 0;
    int op = 0;
    int index2 = 0;
    int nam = 0;
    for(int i = 0; i < n; i++){
        if(array[i] == 1){
            count++;
            op++;
        }
        else{
            count--;
            op++;
        }
        if(count == 0){
            if(nam < op){ 
                nam = op;
             index2 = i - op + 1;
            }
            op = 0;
        }
        
    }

    cout << temp << " " << index << " " << nam << " " << index2+1 << endl;
    return 0;
}