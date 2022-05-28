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
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int andall = arr[0];
        for (int i = 0; i < n; i++) andall = andall & arr[i];   
        int count = 0;
        // cout << andall  << " the and of all " << endl;
        for (int i = 0; i < n ; i++)
        {
            // cout <<  arr[i] <<"  i  " << i <<  endl;

            if (arr[i]!=andall)
            {
                if(i<n-1){
                    arr[i + 1] = arr[i] & arr[i + 1];
                    count++;
                }
                else count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
