//array cloning technique

#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n ;
        int x;
        map<int, int> ans;
        for (int i = 0; i < n; i++)
        {
            ans[arr[i]]++;
        }
        sort(arr, arr + n);
        
        for(int i = 0; i < n; i++){
        	
        }
        int max_frequency = 0;
        for(auto &it: ans){
            if(max_frequency < it.second) max_frequency = it.second;
        }
        // cout << "max_frequency  " << max_frequency << endl;
        if(max_frequency == n) cout << 0 << endl;
        else if(n==1) cout << 0 << endl;
        else if(n==2) cout << 2 << endl;
        else if(max_frequency == 1){
            if(floor(log(n) / log(2)) == log(n) / log(2)) cout << floor(log(n) / log(2)) + n - 1 << endl;
            else cout << floor(log(n) / log(2)) + n << endl;
            // cout << floor(log(n) / log(2)) << endl;
        }
        else cout << floor(log(n) / log(max_frequency)) +n - max_frequency << endl;
    }

    // cout << "ceils " << endl;
    // cout << ceil(4) << endl;
    // cout << ceil(4.5) << endl;
    // cout << floor(4) << endl;
    return 0;
}

/*
0
6
2
5
7
0
*/