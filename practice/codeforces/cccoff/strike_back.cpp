#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> noZero(int arr[], int start, int end)
{
    vector<int> ans;
    int product = 1;

    for (int i = start; i < end; i++)
        product *= arr[i];

    int back = 1;
    int front = 1;
    int backCount = 0, frontCount = 0;

    if (product < 0)
    {

        for (int i = start; i < end; i++)
        {
            front *= arr[i];
            frontCount++;
            if (front < 0)
                break;
        }

        for (int i = end - 1; i >= start; i--)
        {
            back *= arr[i];
            backCount++;
            if (back < 0)
                break;
        }
    }
    if (back > front)
    {
        product /= back;
        // cout << product << endl;
        // cout << 0 << " " << backCount << endl;
        ans.push_back(0);
        ans.push_back(backCount);
        ans.push_back(product);
        return ans;
    }
    
    
        product /= front;
        // cout << product << endl;
        // cout << frontCount << " lol " << 0 << endl;
        ans.push_back(frontCount);
        ans.push_back(0);
        ans.push_back(product);
        return ans;
    
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int countn = 0;
    int countz = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] < 0) countn++;
        if(arr[i] == 0) countz++;
    }

    if(countn%2==0 && countz==0){
        cout << 0 << "  " << 0 << endl;
        return;
    }
    else{
        cout << 1 << "  " << 0 << endl;
        return;
    }

    int product = 1;
    for (int i = 0; i < n; i++)
        product *= arr[i];

    

    if (product > 0)
    {
        cout << 0 << "  " << 0 << endl;
        return;
    }

    if (product == 0)
    {
        vector<int> indexes;
        while(!indexes.empty()) indexes.pop_back();
        indexes.push_back(-1);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                indexes.push_back(i);
        }
        indexes.push_back(n);

        // cout << "the index values" << endl;
        // for(auto &it: indexes){
        //     cout <<" "<< it << " ";
        // }
        // cout << endl;

        int maxp = 1;
        int efront = n, eback = 0;
        vector<int> temp;

        for (int i = 0; i < indexes.size() - 1; i++)
        {
            temp = noZero(arr, indexes[i] + 1, indexes[i + 1]);
            // cout <<indexes[i] + 1<< "the index values it ran for " << indexes[i + 1] << endl;
            if (temp[2] > maxp)
            {
                maxp = temp[2];
                efront = indexes[i]+temp[0] + 1;
                eback = n - indexes[i + 1] + temp[1];
            }
        }
        cout << efront << "  " << eback << endl;
        return;
    }
    if (product < 0)
    {
        vector<int> temp = noZero(arr, 0, n);
        cout << temp[0] << "  " << temp[1] << endl;
        return;
    }
    return;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}