#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(n%2==0){
            // cout << k%n << " n%k " << endl;
            if(k%n==0) cout << n << endl;
            else cout << k%n << endl;
        }
        else{
            int gap = 0; 
            int temp = n - n/2;
            // cout << gap << " gap N temp " << temp << endl;
            if(temp <= k && temp>0){
                // gap = floor(k/temp) +1;
                int temp2 = k/temp;
                if(k%temp!=0) temp2++;
                gap = temp2;
                // cout << gap << "this is gap " << endl;
            }
            // cout << gap << " gap N temp " << temp << endl;
            // cout << (gap+k)%n <<" (gap+k)%k "<< endl;
            if((gap+k)%n==0) cout << n << endl;
            else cout << (gap+k)%n << endl;
        }
    }
    return 0;
}