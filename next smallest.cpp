#include<bits/stdc++.h>
using namespace std;
#define int long long
#define m 1000000007
vector<int> NGI( vector<int> v){
    vector<int> ngi(v.size());
    stack<int> st;
    for(int i = 0; i < v.size(); i++){
        while(!st.empty() && v[i] < v[st.top()]){
            ngi[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        ngi[st.top()] = -1;
        st.pop();
    }
    return ngi;
}

int32_t main(){
    int len;
    cin >> len;
    int k;
    cin >> k;
    vector<int> num(len);
    for(auto &value: num) cin >> value;
    vector<int> ngi = NGI(num);
    int ans = 1;
    int temp;
    for(int i = 0; i < len; i++){
        if(ngi[i] == -1) ;
        else{ 
            temp = ngi[i]-i+1;
            ans = (ans * (temp%m))%m ;
            // cout << num[i] << " " << (ngi[i] == -1 ? -1 : num[ngi[i]] )<< endl;
            // cout << i+1 << " " << (ngi[i] == -1 ? -1 : ngi[i]+1 )<< endl;
        }
    }
    cout << ans;
    cout << endl;
    return 0;
}