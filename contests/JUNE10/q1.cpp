#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string a, b;
        cin >> a >> b;
        int arr[n], brr[m];
        for (int i = 0; i < n; i++)
        {
            arr[i] = a[i] - 'a';
        }
        for (int i = 0; i < m; i++)
        {
            brr[i] = b[i] - 'a';
        }
        sort(arr, arr + n);
        sort(brr, brr + m);
        int ac = 0, bc = 0;
        int ai = 0, bi = 0;
        int count = 0; 
        int crr[n + m];
        int index = 0;
        // for(int i = 0; i < m; i++){
        //     cout << brr[i]  << " ";
        // }
        while (ai < n && bi < m)
        {

            if (arr[ai] < brr[bi])
            {
                if (ac == k)
                {
                    crr[index] = brr[bi];
                    bi++;
                    ac = 0;bc++;
                    index++;count++;
                }
                else
                {
                    crr[index] = arr[ai];
                    ac++;
                    ai++, index++;count++;
                    bc = 0;
                }
            }
            else
            {
                if (bc == k)
                {
                    crr[index] = arr[ai];
                    ai++;ac++;
                    index++;count++;
                    bc = 0;
                }
                else
                {
                    crr[index] = brr[bi];
                    bi++, bc++, index++;count++;
                    ac =0 ;
                }
            }
            
        }
        for (int i = 0; i < count; i++)
            {
                cout << char(crr[i] + 'a') ;
            }
        cout << endl;
    }
    return 0;
}