#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int len;
        cin >> len;
        int arr[len];
        multiset<int> even;
        multiset<int> odd;
        for(int i = 0; i < len; i++){
            cin >> arr[i];
            if(arr[i]%2==0){even.insert(arr[i]);}
            else{odd.insert(arr[i]);}
        }
        int aliceP = 0;
        int bobP = 0;
        bool tr = 1;
        auto ite = ++even.begin();
        auto ito = --odd.end();
        for(int j = 0; j < len; j++){
            cout << " the values of iterators are" << *ite << *ito << endl;
            if(tr){ // alice ki chance 
                if(*ite < *ito){
                    ito--;
                }
                else{
                    aliceP += *ite;
                    ite++;
                }
            }
            else{ // bob ki chance
                if(*ito < *ite){
                    ite++;
                }
                else{
                    bobP += *ito;
                    ito--;
                }
            }
            tr != tr;
        }
        cout << aliceP << " " << bobP << endl;
    }
}

// 4
// 4
// 5 2 7 3            Bob
// 3
// 3 2 1             Tie
// 4
// 2 2 2 2             Alice
// 2
// 7 8              Alice