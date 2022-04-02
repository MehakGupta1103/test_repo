#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    if( (a+c) == 2*b ) cout << "yes" << endl;
    else if(  (a+c) > 2*b  && ((a+c) % (2*b) == 0)) cout << "yes" << endl;
    else if(  (a+c) < 2*b  && ( ((2*b - c) % a == 0) || ((2*b - a) % c == 0)) )cout << "yes" << endl;
    
    else cout << "No" << endl;
  }
  return 0;
}