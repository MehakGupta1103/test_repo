//all sorted

#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n, B; cin >> n >> B;
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int sum = 0;
    for(int i = 0; i < B; i++) sum += A[i];
    int i = 1;int ans = sum;
    while(B--){
        // cout << " the sum " << sum << endl;
        // cout << B << " " << n-i << endl;
        sum = sum-A[B]+A[n-i];
        if(ans < sum) ans = sum;
        i++;
    }
    cout << ans << endl;
    return 0;
}
