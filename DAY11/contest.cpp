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

        int x, y;
        cin >> x >> y;

        //fixing x
        int l1 = x/2;
        int r1 = x - (x/2);
        cout << l1 << " " << r1 << endl;

        for (int i = 1; i * i <= y; i++)
        {
            if (y % i == 0){
                int temp = y/i;
                if( ( (i < l1) && (temp < l1) ) || ( (i > r1) && (temp > r1) ) ){
                    cout << i << " " << temp << endl;
                    break;
                }
                else cout << -1 << endl;
            }
        }
    }
    return 0;
}
