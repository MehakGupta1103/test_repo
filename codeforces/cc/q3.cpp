#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 10;

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int sum = 0;
        cout << s << endl;
        while(k)
        {
            for (int i = n - 1; i > 1; i--)
            {

                if (s[i] == '0' && s[i - 1] == '1')
                {
                    s[i] = '1';
                    s[i - 1] = '0';
                    k--;
                }
                if (k == 0)
                    break;
            }
            k--;
        }
        cout << s << endl;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0')
            {
                if (s[i + 1] == '0')
                    sum += 0;
                else
                    sum += 1;
            }
            else
            {
                if (s[i + 1] == '0')
                    sum += 10;
                else
                    sum += 11;
            }
        }
        cout << sum << endl;
    }

    return 0;
}