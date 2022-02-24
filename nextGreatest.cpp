#include<bits/stdc++.h>
using namespace std;

vector<int> NGI( vector<int> v){
    vector<int> ngi(v.size());
    stack<int> st;
    for(int i = 0; i < v.size(); i++){
        while(!st.empty() && v[i] > v[st.top()]){
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

int main(){
    int len;
    cin >> len;
    vector<int> num(len);
    for(auto &value: num) cin >> value;
    vector<int> ngi = NGI(num);
    for(int i = 0; i < len; i++){
        cout << num[i] << " " << (ngi[i] == -1 ? -1 : num[ngi[i]] )<< endl;
    }
    cout << endl;
    return 0;
}