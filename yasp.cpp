#include<bits/stdc++.h>
using namespace std;

template <class I>
auto get_kth_element_count(I it, int offset){
    while(offset >= it->second) offset -= it->second, ++it;
    return it->second;
}

int calculate_F(map<int, int> const& m, int n, int offset){
    if(offset<n-offset){
        return get_kth_element_count(m.rbegin(), offset);
    }else{
        offset = n-offset-1;
        return get_kth_element_count(m.begin(), offset);
    }
}


int solve(vector<int> const& v, int n, int k)
{
    int ans = 0; 
    for(int i = 0; i < n; i++)
    {
        map<int, int> ms;
        for(int j = i, s = 1; j < n; j++, s++)
        {
            ms[v[j]]++;
            int m = ceil(k/float(s));
            int offset = (m*s-k)/m;
            int F = calculate_F(ms, s, offset);
            if(ms.count(F)) ans++;
        }
    }
    return ans;
}


int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int temp = solve(arr, n, k);
        cout << temp << endl;
    }
}