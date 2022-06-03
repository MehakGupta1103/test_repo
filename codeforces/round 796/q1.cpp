#include<bits/stdc++.h>
#define int long long
using namespace std;

void decToBinary(int n)
{
    int num = n;
    // cout << " the test case "<< endl;
    if(n==1){
        cout << 3 << endl;
        return ;
    }
    if(n&1){
        cout << 1 << endl;
        return;
    }
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    // printing binary array in reverse order
    int set = 0;
    for (int j = i - 1; j >= 0; j--){
        if(binaryNum[j]==1) set++;
    }
    if(set == 1){
        cout << num+1 << endl;
        return;
    }
    int ans = 0;
    int power = 1;
    for(int k = 1; k < i; k++){
        // cout << binaryNum[k] << endl;
        if(binaryNum[k]==1){
            power *= 2;
            ans += power;
            cout << ans << endl;
            return ;
        }
        else{
            // cout << ans << endl;
            power *= 2;
        }
    }
    return;
    
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        decToBinary(n);
    }
    return 0;
}