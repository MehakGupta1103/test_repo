#include<bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
bool check(ll val,ll n,ll k,std::vector<ll> candy){
	
	if(k==1)
        return true;
    ll sum=0;
    for(ll i=n-1;i>=0;i--)
    {
        sum +=(candy[i]/val);
    }
    if(sum >= k)
        return true;
    else
        return false;
 
}
 
ll binary_search(ll n,ll k, vector<ll> candy){
 
	ll low = 1;
	ll high = candy[n-1]+1;
	ll mid =0;
	while(high > low){
		mid = (low+high)/2;
		if(check(mid,n,k,candy)){
			low = mid+1;
		}
		else{
			high = mid;
		}
	}
 
	return low-1;
 
}
 
int main(){
 
	int t;
	cin>>t;
 
	while(t--){
		ll n,k;
		cin>>n>>k;
 
		vector<ll> candy(n);
		ll total = 0;
 
		for(ll i=0;i<n;i++){
			cin>>candy[i];
			total += candy[i];
		}
 
		if(total < k){
			cout<<0<<"\n";
		}
		else{
			ll maxPossible = total/k;
			if(maxPossible==1){
				cout<<1<<"\n";
			}
			else{
				sort(candy.begin(), candy.end());
				cout<<binary_search(n,k,candy)<<"\n";
			}
		}
	}
 
	return 0;
}