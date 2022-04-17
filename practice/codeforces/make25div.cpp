#include <bits/stdc++.h>
#define int long long
using namespace std;
void zero(string, int);
void five(string, int);

void solve(){
    string n;
    cin >> n;
    int count = 0;
    int temp = 0;
    for(int i = n.length()-1; i >= 0; i--){
        if(n[i]=='0'){
            zero(n, count);
            return ;
        }
        else if(n[i]=='5'){
            five(n, count);
            return;
        }
        else count++;
    }
    return;
}

void zero(string n, int count){
    cout << "zero chala" << endl;
    for(int i = n.length()-2; i >= 0; i--){
        if(n[i]=='0'||n[i]=='5'){
            cout << count << endl;
            return;
        }
        else count++;
    }

}

void five(string n, int count){
    cout << "five chala" << endl;
    for(int i = n.length()-2; i >= 0; i--){
        if(n[i]=='2'||n[i]=='7'){
            cout << count << endl;
            return;
        }
        else count ++;
    }
}

int32_t main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}