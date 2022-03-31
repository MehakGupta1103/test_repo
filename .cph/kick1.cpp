#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
   for(int t = 0; t < tt; t++){
        string istr, pstr; 
        cin >> istr >> pstr;
        int ilen = istr.length();
        int plen = pstr.length();
        int i = 0, j = 0; 
        int count = 0;
        if(plen<ilen){
            cout << "Case #" << t+1 << ": IMPOSSIBLE" << endl;
        }
        else{
            while(i<ilen && j<plen){
                if(istr[i]==pstr[j]){
                    i++;
                }
                else{
                    count++;
                }
                j++;
            }
            if(i==ilen){
                    cout <<  "Case #" << t+1 <<": "<< count + plen-j << endl;
                }
            else cout << "Case #" << t+1 << ": IMPOSSIBLE" << endl;
        }
    }
    return 0; 
}

