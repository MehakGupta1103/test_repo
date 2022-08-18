#include <bits/stdc++.h>

#define loop(i, start, end) for (int i = start; i < end; i++)

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    loop(i, 0, n) cin >> arr[i];
    map<int, int> hash;
    int count = 0;
    loop(i, 0, n){
        if(hash.find(arr[i]) == hash.end()){
            hash[arr[i]] = 1;
        }
        else{
            hash[arr[i]]++;
            
        }
        if(hash.find((-1)*arr[i]) != hash.end()){
                loop(i, 0, hash[(-1)*arr[i]]) cout << (-1)*arr[i] << " " << arr[i] << endl;
                count ++;
            }
    }
    for(auto &it: hash){
        cout << it.second << " ";
    }
    cout << endl << " the count is : " << count << endl;
    return 0;
}