#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int len;
        cin >> len;
        int temp;
        multiset<int> even;
        multiset<int> odd;
        for(int i = 0; i < len; i++){
            cin >> temp;
            // cout << "the value of temp is " << temp << endl;
            if(temp%2==0){even.insert(temp);}
            else{odd.insert((-1)*temp);}
        }
        int aliceP = 0;
        int bobP = 0;
        int tr = 1;
        auto ite = even.begin();
        auto ito = odd.begin();
        for(int j = 0; j < len; j++){
            // cout << "the value of tr is " << endl;
            // cout << " the values of iterators are " << *ite <<" "<< (-1)*(*ito) << endl;
            if(tr){ // alice ki chance 
                // cout << "alice ki chance thi " << endl;
                if(*ite < (-1)*(*ito)){
                    ito++;
                }
                else{
                    aliceP += *ite;
                    ite++;
                    // cout << "alice ke points bade " << endl;
                }
            }
            else{ 
                // cout << "bob ki chance " << endl;
                if((-1)*(*ito) < *ite){
                    ite++;
                    
                }
                else{
                    bobP += (-1)*(*ito);
                    // cout << "bob ke points bade " << bobP << endl;
                    ito++;
                }
            }
            tr = !tr;
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