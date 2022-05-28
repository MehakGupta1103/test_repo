#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5+10;
vector<int> Primes(N+1, 1); // initially assume all are primes

void is_prime()          
{
    Primes[0] = Primes[1] = 0;
    for(int i = 2; i < N; i++)
    {
        if(Primes[i]==1)
        {                                         
            for(int j = 2*i; j < N; j += i)
            {
                Primes[j] = 0;
            }

        }
    }


}

void solve(){
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;
    is_prime();
    vector<int> p;
    for(int i = 0; i < n; i++){
        if(Primes[i]==1) p.push_back(i);
    }
    sort(p.begin(), p.end(), greater<int>());
    // for(auto &it: p) cout << it << " prime ";
    // cout << endl;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(c!=s[i] && i!=p[0]){
            count++;
            s[i] = c;
        }
    }
    int temp = p[0];
    if(s[temp]!=c){
        count++;
        cout << count << endl;
        if(count!=0) cout << p[0] << " " << p[1];
        else cout << endl;
    }
    else{
        cout << count << endl;
        if(count!=0) cout << p[0] << endl;
        else cout << endl;
    }
    return ;
}

int32_t main() {
  int t;
  cin >> t;
  while (t--) {
      
      solve();
  }
  return 0;
}