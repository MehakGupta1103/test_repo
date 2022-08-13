//longest consecutive sequence

#include<bits/stdc++.h>

#define loop(i, start, end) for(int i = start; i < end; i++)

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        loop(i, 0, n) cin >> arr[i];
        map<int, int> hash;
        loop(i, 0, n) hash[arr[i]] = 1;
        set<int> current_stack;
        set<int> ans;
        loop(i, 0, n){
            if(hash[arr[i]]){
                current_stack.insert(arr[i]);
                hash[arr[i]] = 0;
                int temp = arr[i]+1;
                while(hash.find(temp) != hash.end()){
                    current_stack.insert(temp);
                    hash[temp] = 0;
                    temp++;
                }
                 temp = arr[i]-1;
                while(hash.find(temp) != hash.end()){
                    current_stack.insert(temp);
                    hash[temp] = 0;
                    temp--;
                }
            }
            if(current_stack.size() > ans.size()) ans = current_stack;
            current_stack.clear();
        }
        for(auto &it: ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}