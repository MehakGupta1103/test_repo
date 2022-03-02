#include<bits/stdc++.h>
// #define int long long
using namespace std;
vector<vector<int>> allSubset;
void subsetg(vector<int> &sets, int i, vector<int> &num){

    //base condition
    if(i==num.size()){
        allSubset.push_back(sets);
        return;
    }

    //ith element ko include nahi kkarna
    subsetg(sets, i+1, num);

    //ith element ko include karna he
    sets.push_back(num[i]);
    subsetg(sets, i+1, num);
    sets.pop_back();
}

int main(){
    int the_ans = 0;
    int t, p, b;
    cin >> t >> p >> b;
    vector<int> num(t);
    for(auto &it: num){
        cin >> it;
    }
    vector<int> empty;
    subsetg(empty, 0, num);
    for(auto &it: allSubset){
        int ans = 1;
        if(it.size()==2){
            for(auto &value: it){
                ans = ((ans%p)*(value%p))%p;
            }
            cout << ans << " this is" << endl;
            if(ans%p==b){
                cout << " chaoa \n";
                the_ans++;
            }
        }
    }
    cout << the_ans <<  endl;
    return 0;
}