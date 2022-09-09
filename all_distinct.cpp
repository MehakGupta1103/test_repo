//all sorted

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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        map<int, int> ans;
        for(int i = 0; i < n; i++){
        	ans[arr[i]]++;
        }
        int temp = n-ans.size();
        if(temp&1) cout << ans.size()-1 << endl;
        else cout << ans.size() << endl;
    }
    return 0;
}
