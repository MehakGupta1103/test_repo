#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         map<int,int> diffInd;
//         for(int i = 0; i < gas.size(); i++){
//             if(gas[i]>=cost[i]){
//                 int temp = gas[i]-cost[i];
//                 if(i==gas.size()){
//                 temp += gas[0];
//                 diffInd.insert({temp,i});
//                 }
//                 else{
//                     temp += gas[i+1];
//                     diffInd.insert({temp,i});
//                 }
//             }
            
//         }
//         sort(diffInd.begin(), diffInd.end(), greater<int>());
//         // for(auto &it: diffInd){
//         //     int te = it.second;
//         //     return te;
//         // }
//         auto it = diffInd.begin();
//         cout << it << endl;
//         return 9;
//     }
// };

int main(){
    // gas = [1,2,3,4,5], cost = [3,4,5,1,2]
    vector<int> gas = {2,3,4} ;
    vector<int> cost = {3,4,3} ;
    map<int,int> diffInd;
    int temp = 0;
    for(int i = 0; i < gas.size(); i++){
        if(gas[i]>=cost[i]){
            temp = gas[i]-cost[i];
            if(i==gas.size()-1){
            temp += gas[0];
                    // cout << " this&&& is t " << temp << " this is i " << i << endl;

            diffInd[temp]=i;
            }
            else{
                temp += gas[i+1];
                        // cout << " tihs is t " << temp << " this is i " << i << endl;

                diffInd[temp]=i;
            }
        }
        
    }
        // sort(diffInd.begin(), diffInd.end(), greater<int>());
        int max = 0, index = -1;
        for(auto &it: diffInd){
            int t = it.first;
            // cout << " thids ids t " << t << endl;
            if(max<t){
                max = t;
                index = it.second;
            }
        }
        // cout << max << " lo " << index;
        // auto it = diffInd.begin();
        // cout << *it << endl;
        cout << index+1;
        return 0;
}
