#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        map<int, int> freq;
        int flag=0, count=0, max=0;
        int array[n];
        for(int i = 0; i < n; i++) cin >> array[i];
        for(int i = 0; i < n; i++){
            freq[array[i]]++;
            count++;
            if(freq.size()<k){
                if(max<count) max = count;
            }
            else if(freq.size()==k){
                auto it = freq.find(array[flag]);
                freq[array[flag]]--;
                if(it -> second == 0) freq.erase(it);
                flag++;
                count--;
            }
            
        }
        cout << max << endl;
    }
    return 0;
}
