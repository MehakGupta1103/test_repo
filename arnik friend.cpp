#include <bits/stdc++.h>
const int m = 1000000007;
using namespace std;
const int lo = 1e5+10;
int arra[lo] = {0};

int binexp(int a, int b, int m){
    int result = 1;
    while(b>0){
        if(b&1){
            result = (result*1LL*a)%m;
        }
        a = (a*1LL*a)%m;
        b >>= 1;
    }
    return result;
}
	int arr[lo] ;

int fact[lo];
int main() {
    //precomputing the factorial
    fact[0] = 1;
    for(int i = 1; i < lo; i++){
        fact[i] = (fact[i-1]*1LL*i)%m;
    }
	int num;
	cin >> num;	
	for(int i = 0; i < num; i++){
		cin >> arr[num];
		arra[arr[num]]++;
	}
	int temp = fact[num];
    cout << temp << endl;
	for(int i = 0; i <= 1e5; i++){
		if(arra[i]>1){        
            cout << arra[i] << " this is the count " << endl;
			temp = (temp*1LL*binexp(fact[arra[i]], m-2, m))%m;  // cnat do the basic division 
		}
	}
	cout << temp << endl;
}
