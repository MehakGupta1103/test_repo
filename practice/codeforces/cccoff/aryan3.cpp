#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[26], brr[26];
        for (int i = 0; i < 26; i++)
        {
            arr[i] = 0;
            brr[i] = 0;
        }
        string a, b;
        cin >> a >> b;
        int lenOfa = a.length();
        int lenOfb = b.length();
        int index = 0;
        for (int i = 0; i < lenOfa; i++)
        {
            if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
            {
                if (isupper(a[i]))
                {
                    a[i] += 32;
                }
                index = a[i] - 'a';
                arr[index] = 1;
            }
        }

        for (int i = 0; i < lenOfb; i++)
        {
            if ((b[i] >= 'a' && b[i] <= 'z') || b[i] >= 'A' && b[i] <= 'Z')
                {
                    if (isupper(b[i]))
                    {
                        b[i] += 32;
                    }
                    index = b[i] - 'a'; 
                    brr[index] = 1;
                }
        }

        int flag = 1;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != brr[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
