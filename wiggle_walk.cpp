#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {

        int n, r, c, sr, sc;
        cin >> n >> r >> c >> sr >> sc;
        string s;
        cin >> s;
        pair<int, int> p;
        map<pair<int, int>, int> m;

        p = make_pair(sr, sc);
        m[p] = 1;

        for (int i = 0; i < n; i++)
        {

            if (s[i] == 'E')
            {
                ++sc;
            }
            else if (s[i] == 'W')
            {
                --sc;
            }
            else if (s[i] == 'N')
            {
                --sr;
            }
            else
            {
                ++sr;
            }

            while (m.find({sr, sc}) != m.end())
            {

                if (s[i] == 'E')
                {
                    ++sc;
                }
                else if (s[i] == 'W')
                {
                    --sc;
                }
                else if (s[i] == 'N')
                {
                    --sr;
                }
                else
                {
                    ++sr;
                }
            }
            m[{sr, sc}] = 1;
        }
        cout << "Case #" << i << ": " << sr << " " << sc << endl;
    }
}