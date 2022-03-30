#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
// #define int long long 
const int m = 998244353;

int main() {

	int t; cin >> t;
	while(t--){
	    int x1, p1, x2, p2;
	    cin >> x1 >> p1 >> x2 >> p2;
	    if(x1 > x2 && p1 > p2) cout << "<" << endl;
	    else if(x1 < x2 && p1 < p2) cout << "<" << endl;
	    else if(x1 == x2 && p1 == p2) cout << "=" << endl;
	    else{
	        if(p1>p2){
	           float temp = x1*pow(10,p1-p2)/x2;
	           if(temp>1) cout << ">" << endl;
	           else if(temp<1) cout << "<" << endl;
	           else cout << "=" << endl;
	        }
	        else{
	           float temp = x1/pow(10,p2-p1)/x2;
	           if(temp>1) cout << ">" << endl;
	           else if(temp<1) cout << "<" << endl;
	           else cout << "=" << endl;
	        }
	    }
	}

	return 0;
}