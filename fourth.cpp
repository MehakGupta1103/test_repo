#include <bits/stdc++.h>

#define loop(i, start, end) for (int i = start; i < end; i++)

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    queue<int> q;
    int arr[n];
    loop(i, 0, n) cin >> arr[i];
    int sum = 0;
    int flag = 0;
    loop(i, 0, n)
    {
        q.push(arr[i]);
        sum += arr[i];
        while (sum > t)
        {
            int x = q.front();
            q.pop();
            sum -= x;
        }
        if (sum == t)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }
    }
    else cout << -1 << endl;
    cout << endl;
    return 0;
}