#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t binexp(int a, int b, int m){
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

int main(){

}