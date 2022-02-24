#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int Tchef, Tvotes;
    cin >> Tchef >> Tvotes;
    map<string,string> inpot;
    map<string,int> countChef;
    map<string,int> countCont;
    for(int i = 0; i < Tchef; i++){
        string t1, t2;
        cin >> t1 >> t2;
        inpot[t1] = t2;
    }
    for(int i = 0; i < Tvotes; i++){
        string temp;
        cin >> temp;
        countChef[temp]++;
        countCont[inpot[temp]]++;
    }
    int max = 0;
    string name;
    for(auto &it: countChef){
        if(it.second > max){
            name = it.first;
            max = it.second;
        }
    }
    int mac = 0;
    string cmane;
    for(auto &it: countCont){
        if(mac < it.second){
            mac = it.second;
            cmane = it.first;
        }
    }
    cout << cmane << " " << name << endl;
    return 0;
}