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
    int t;
    cin >> t;
    vector<int> num(t);
    for(auto &it: num){
        cin >> it;
    }
    vector<int> empty;
    subsetg(empty, 0, num);
    for(auto &it: allSubset){
        cout << it.size() << "this is the size" << endl;
        for(auto &value: it){
            cout << value ;
        }
        cout << endl;
    }
    return 0;
}