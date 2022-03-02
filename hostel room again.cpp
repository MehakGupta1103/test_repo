#include <bits/stdc++.h>
#define int long long
const int N = 1e5+10;
int a15[N] = {0};
int a16[N] = {0};
int a17[N] = {0};
int a18[N] = {0};
int a19[N] = {0};
int a20[N] = {0};
int pa15[N] = {0};
int pa16[N] = {0};
int pa17[N] = {0};
int pa18[N] = {0};
int pa19[N] = {0};
int pa20[N] = {0};
using namespace std;

int32_t main() {
	int nr, ns, nq;
	cin >> nr>> ns>> nq;	
	string rolno;
	int rmno;								
	for(int i = 0; i < ns; i++){
		cin >> rolno >> rmno ;
        // cout << "chala" << endl;
		if(rolno[6] == '5') a15[rmno]++;
		else if(rolno[6] == '6') a16[rmno]++;
		else if(rolno[6] == '7') a17[rmno]++;
		else if(rolno[6] == '8') a18[rmno]++;
		else if(rolno[6] == '9') a19[rmno]++;
		else if(rolno[6] == '0') a20[rmno]++;

	}
	for(int i = 1; i <= nr;  i++){
		pa15[i] = pa15[i-1]+a15[i];
	}
	for(int i = 1; i <= nr;  i++){
		pa16[i] = pa16[i-1]+a16[i];
	}
	for(int i = 1; i <= nr;  i++){
		pa17[i] = pa17[i-1]+a17[i];
	}
	for(int i = 1; i <= nr;  i++){
		pa18[i] = pa18[i-1]+a18[i];
	}
	for(int i = 1; i <= nr;  i++){
		pa19[i] = pa19[i-1]+a19[i];
	}
	for(int i = 1; i <= nr;  i++){
		pa20[i] = pa20[i-1]+a20[i];
	}	

	while(nq--){
		int y, s, e;
		cin >> y >> s >> e;
		if(y == 2015){
			cout << pa15[e]-pa15[s-1] << endl;
		}
		else if(y==2016){
			cout << pa16[e]-pa16[s-1] << endl;
		}
		else if(y==2017){
			cout << pa17[e]-pa17[s-1] << endl;
		}
		else if(y==2018){
			cout << pa18[e]-pa18[s-1] << endl;
		}
		else if(y==2019){
			cout << pa19[e]-pa19[s-1] << endl;
		}
		else if(y==2020){
			cout << pa20[e]-pa20[s-1] << endl;
		}
	}
	return 0;	
}

