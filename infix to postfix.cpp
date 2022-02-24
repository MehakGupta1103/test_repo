// #include<bits/stdc++.h>
// #define int long long
// using namespace std;

// int32_t main(){
//     map<char, int> sym = { {'+',1}, {'-',1}, {'*',2}, {'/',2}, {'^',3} };
//     int t;
//     cin >> t;
//     while(t--){
//         stack<char> operand;
//         string emptystr = "";
//         int n; string pat;
//         cin >> n >> pat;
//         for(int i = 0; i < n; i++){
//             cout << "this is the value of pat[i] " << pat[i] << endl;
//             if(pat[i] != '('){
//                 cout << " andar " << pat[i] << endl;
//                 auto it = sym.find(pat[i]);
//                 if(it != sym.end()){
//                     cout << " since a symbol " << endl;
//                     if(operand.empty()){
//                         cout << " since the stack was empty pat[i] was pusshed "<< pat[i] << endl;
//                         operand.push(pat[i]);
//                     }
//                     else{
//                         cout << " the stack was not empty " << endl;
//                         cout << " the symvols value were compared " <<  sym[pat[i]] <<" "<< sym[operand.top()] << endl;
//                         while(sym[pat[i]] < sym[operand.top()]){
//                             emptystr += operand.top();
//                             cout << " adding top" << operand.top() << endl;
//                             operand.pop();
//                         }
//                         cout << " now it become empty pushing the incoming value " << pat[i] << endl;
//                         operand.push(pat[i]);
//                     }
//                 }
//                 else{
//                   emptystr += pat[i]; 
//                   cout << " since a ala was found adding pat[i]" << pat[i] << endl; 
//                 } 
            
//           }    
            
//         }
//         if(!operand.empty()){
//                 cout << " the stack was not empty 46 " << endl;
//                             // cout << " the symvols value were compared " <<  sym[pat[i]] <<" "<< sym[operand.top()] << endl;
//                             // while(sym[pat[i]] < sym[operand.top()] && !operand.empty()){
//                                 emptystr += operand.top();
//                                 cout << " adding top" << operand.top() << endl;
//                                 operand.pop();
//                             // }
//                             // cout << " now it become empty pushing the incoming value " << pat[i] << endl;
//                             // operand.push(pat[i]);
//             }
//         cout << emptystr <<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int precedence(char c){
    if(c == '^'){
        return 3;
     }
    else if(c == '/' || c == '*'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    else{
        return -1;
    }
}

int main(){
    int test;
    cin>>test;
    while(test--){
        int num;
        cin>>num;

        string s;
        cin>>s;
        string ans;
        stack<char> st;
       
       for(int i = 0; i<num; ++i){
        char c = s[i];
         if((c>='A' && c<='Z')){
          ans += c;
           }
           else if(c == '('){
               st.push('(');
           }
           else if(c == ')'){
               while(st.top() != '('){
                   ans += st.top();
                   st.pop();
               }
               st.pop();
           }
           else{
               while(!st.empty() && precedence(s[i]) <= precedence(st.top())){
                   ans += st.top();
                   st.pop();
               }
               st.push(c);
           }

       }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        cout<<ans<<"\n";
    }
}