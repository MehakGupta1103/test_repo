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
    map<int, int> range;
    for(int i = 0; i < n; i++){
        if(A[i]==1) range[i+1-B+1] = i+1+B-1;
    }
    int count = 0;
    int cur = 1;
    for(auto &it: range){
        cout << it.first << " " << it.second << endl;
        if(it.first == cur){
            count++;
            cur = it.second;
     }
        if((range.second).find(cur+1) == (range.second).end());
    }
    return 0;
}
