#include <bits/stdc++.h>
//For ordered set ..
// #include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
#define pll pair<ll, ll>//yuaiyai
#define vb vector<bool>
#define vll vector<ll>
#define vpll vector<pll>
#define vvll vector<vector<ll>>
#define endl "\n"
#define f first
#define s second
#define pb push_back
#define vpop pop_back
#define mod 1000000007
#define all(a) a.begin(), a.end()
#define REP(i, sVal, j) for (int i = (int)sVal; i <= (int)j; i++)
#define REPR(i, sVal, j) for (int i = (int)sVal; i >= (int)j; i--)
#define inf 1844674407370955000
#define ub upper_bound
#define lb lower_bound
//2,147,483,647 -> INT_MAX. 2147483647
//cout<<fixed<<setprecision(8)<<val<<endl;

ll mod_inv(ll a){
	ll p = mod-2,res = 1;
	while (p > 0){ if(p&1)res=(res*a)%mod; p=p>>1; a=(a*a)%mod;}
	return res % mod;
}
// ll fact[100001]; // must initialise fact.
// ll nCk(ll n, ll k) { return ((fact[n] * mod_inv(fact[k])) % mod * mod_inv(fact[n - k])) % mod; }
ll _ceil_fun(ll a, ll b) { return a % b == 0 ? a / b : (a / b + 1); }
void _swap(ll &a,ll &b){a=a^b;b=a^b;a=a^b;}
ll pow_fun(ll b, ll p){
	if (p == 0)return 1;
	ll res = 1;
	while(p){
		if(p & 1){ res = (res * b);}
		b=(b*b); p=p/2;
	}
	return res;
}
ll pow_fun_mod(ll b, ll p){
	if (p == 0)return 1;
	ll res = 1;
	while (p){
		if (p & 1){ res=(res*b)%mod; }
		b = (b * b) % mod;
		p = p / 2;
	}
	return res % mod;
}
ll _lcm(ll a, ll b){return (a * b)/__gcd(a, b);}
bool isPrime(ll n){
	if (n == 1) return 0;
	if (n == 2 || n == 3)return 1;
	if ((n & 1) == 0)return 0;
	if (n % 3 == 0)return 0;
	for (ll i = 5; i * i <= n; i += 6){
		if (n % i == 0 || n % (i + 2) == 0)return 0;
	}
	return 1;
}
void _sieve(vector<int> &vec){
	int size = vec.size();
	vec[1] = 1;
	for (int i = 2; i < size; i++){
		if (vec[i] == -1)
			for (int j = 2 * i; j < size; j += i)
				if (vec[j] == -1)
					vec[j] = i;
	}
}

ll _find(ll n,vll &par){if(par[n]==-1) return n;return par[n]=_find(par[n],par);}
void _union(ll a,ll b,vll &par){
	ll ppa=_find(a,par);
	ll ppb=_find(b,par);
	if(ppa!=ppb) par[ppa]=ppb;
}

void solve(){
	ll n;
	cin>>n;
    vpll arr(n);
	REP(i,0,n-1) {cin>>arr[i].f; arr[i].s=i;}

	vll par(n,-1);
	vvll pos(32);

	REP(i,0,31){
		ll tt=(1<<i);
		REP(j,0,n-1){
			if(arr[j].f&tt){
				pos[i].pb(j);
			}
		}
	}
	REP(i,0,31){
		REP(j,1,pos[i].size()-1){
			_union(pos[i][0],pos[i][j],par);
		}
	}
	sort(all(arr));
	REP(i,0,n-1){
		if(_find(i,par)!=_find(arr[i].s,par)){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}	

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int T; cin>>T;
	while(T--){ solve(); }

	// solve();
	return 0;
}

// The symbols for floor and ceiling are like the 
// square brackets [ ] with the top or bottom part missing:

//Problem With us ??
//-->Always miss cin>>n,and other input.
//-->Miss Semicolan at endl; of last line. 