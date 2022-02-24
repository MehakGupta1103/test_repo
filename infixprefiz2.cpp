#include<bits/stdc++.h>
#define int long long
using namespace std;
int precedence(char symbol){
    if(symbol == '^') return 3;
    else if(symbol == '*' || symbol == '/' ) return 2;
    else if(symbol == '+' || symbol == '-' ) return 1;
    else return 0;
}
int32_t main(){
    int t;
    cin >> t;
    stack<char> mystack;
    while(t--){
        int n; string s;
        cin >> n >> s;
        string ans = "";
        for(int i = 0; i < n; i++){
            if(precedence(s[i])==0){
                ans += s[i];
            }
            else if(s[i] == '(') mystack.push(s[i]);
            else if(s[i] == ')'){
                while(mystack.top() != '('){
                    ans += mystack.top();
                    mystack.pop();
                }mystack.pop();
            } 
            else {
                while(!mystack.empty() && precedence(s[i] <= precedence(mystack.top()))){
                    ans += mystack.top();
                    mystack.pop();
                } mystack.push(s[i]);
            }
        }
        while(!mystack.empty()){
            ans += mystack.top();
            mystack.pop();
        }
    cout << ans << endl;}
    
    return 0;
}


//2nd
#include<bits/stdc++.h>
using namespace std;
int precedence(char symbol){
    if(symbol == '^') return 3;
    else if(symbol == '*' || symbol == '/' ) return 2;
    else if(symbol == '+' || symbol == '-' ) return 1;
    else return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        // stack<char> st;
        int n; string s;
        cin >> n >> s;
        string ans = " ";
                stack<char> st;

        for(int i = 0; i < n; i++){
            if(s[i]>='A' && s[i]<='Z'){
                ans += s[i];
            }
            else if(s[i] == '(') st.push(s[i]);
            else if(s[i] == ')'){
                while(st.top() != '('){
                    ans += st.top();
                    st.pop();
                }st.pop();
            } 
            else {
                while(!st.empty() && precedence(s[i] <= precedence(st.top()))){
                    ans += st.top();
                    st.pop();
                } st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        cout << ans << endl;
        
    }
    
    return 0;
}
