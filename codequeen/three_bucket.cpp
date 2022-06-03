#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            int temp;
            cin >> temp;
            cout << 2 * temp << endl;
            // cout << "cha11l" << endl;
        }
        else if (n == 2)
        {
            int n1, n2;
            cin >> n1 >> n2;
            cout << 2 * max(n1, n2) << endl;
            // cout << "cha222l" << endl;
        }
        else if (n == 3)
        {
            int n1, n2, n3;
            cin >> n1 >> n2 >> n3;
            cout << 2 * (max(n1, max(n2, n3)) - min(n1, min(n2, n3))) << endl;
            // cout << "cha333l" << endl;
        }
        else
        {
            // cout << "chal444" << endl;
            multiset<int> num;
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                num.insert(x);
            }
            set<int>::iterator it;
            while (num.size() > 3)
            {
                it = num.begin();
                int temp = *it;
                cout << "this is temp " << temp << endl;
                int t1 = temp;
                it++;
                temp += *it;
                int t2 = *it;
                cout << "this is temp " << temp << endl;
                num.insert(temp);
                num.erase(t1);
                num.remove(t2);
            }
            it = num.begin();
            int ans = *it;
            cout << ans << "this is ans " << endl;
            it++;
            it++;
            ans -= *it;
            cout << ans << "this is ans " << endl;
            if (ans < 0)
                cout << (-1) * 2 * ans << endl;
            else
                cout << 2 * ans << endl;
        }
    }
    return 0;
}