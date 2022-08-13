#include<bits/stdc++.h>

#define loop(i, start, end) for(int i = start; i < end; i++)

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        loop(i, 0, n) cin >> arr[i];
        int sum = 0;
        set<int> pre_sum;
        pre_sum.insert(sum);
        int ans = 0;
        loop(i, 0, n){
            int val = arr[i]*(arr[i]-1)/2;
            auto temp = upper_bound(pre_sum.begin(), pre_sum.end(), val);
            temp--;
            cout << *temp << endl;
            ans += *temp;
            sum += arr[i];
            cout << sum << " the sum " << endl;
            pre_sum.insert(sum);
        }
        cout << ans << endl;
    }
    return 0;
}