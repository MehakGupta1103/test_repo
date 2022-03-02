#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> alls;
void subsetg(vector<int> &sets, int i, vector<int> &num){
	if(i==num.size()){
		alls.push_back(sets);
		return;
	}
	subsetg(sets, i+1, num);

	sets.push_back(num[i]);
	subsetg(sets, i+1, num);
	sets.pop_back();
}

int main() {
	int ta = 0;
	int t, p, b;
	cin >> t >> p >> b;
	vector<int> num(t);
	for(auto &it: num){
		cin >> t;
	}
	vector<int> empty;
	subsetg(empty, 0, num);
	for(auto &it: alls){
		int ans = 1;
		if(it.size()==2){
			for(auto &value: it){
				ans = ((ans%p)*(value%p))%p;
			}
			cout << ans << " this is the san s" << endl;
			if(ans%p==b){
				cout << "chala" << endl;
				ta++;
			}
		}
	}
	cout << ta << endl;
	return 0;
}

