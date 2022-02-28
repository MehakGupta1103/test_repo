#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int num;
	cin >> num;	
    map<pair<int,int>,int> couples;
    int a, b;
    for(int i = 0; i < num; i++){
        cin >> a >> b;
        auto it = couples.find({b,a});
        if(it != couples.end()) couples[{b,a}]++;
        else couples.insert({{a,b}, 0});
    }
    	cout << couples.size() << endl;
    // sort(couples.begin(),couples.end());
    for(auto &it: couples){
        auto pair = it.first;
        auto count = it.second;
        // cout << count << " tis is count " << endl;
        if(count > 0 ) cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}