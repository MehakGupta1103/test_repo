#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    // your code goes here
    int t;
    cin >> t;
    for(int itr = 1; itr <= t; itr++){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int pre[n], post[n];
        int temp = arr[0];
        for(int i = 0; i < n; i++){
            if(temp < arr[i]) temp = arr[i];
            pre[i] = temp;
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(
                ((i == 0) || (arr[i] > pre[i-1])) &&
                ( (i == n-1) || (arr[i] > arr[i+1]) )
                ) count++;
        }

        cout << "Case #" << itr << ": " << count << endl;
    }
    return 0;
}


/*
Case #1: 2
Case #2: 1
Case #3: 3
Case #4: 0
*/