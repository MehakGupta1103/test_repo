#include<bits/stdc++.h>
#define int long long
using namespace std;

void printBinary(int num){
    for(int i = 10; i >= 0; --i)    cout << ((num>>i)&1);
    cout << endl;
}

int32_t main(){
    int a;
    cin >> a;
    printBinary(a);
    // cout << (a<<1) << endl;
    int i; 
    cin >> i;
    // cout << (a&(1<<i)) << endl;
    printBinary(a&(~(1<<2))); //toddle

    //to find even and nos.
    if(i&1) cout << "odd hoga" << endl; //odd nos have least significant bit as 1 always
    else cout << " even hoga" << endl;
    
    //multiply and deviding a nos by 2
    cout << (a<<1) << " this will multiply the no by 2" << endl;
    cout << (a>>1) << endl; // this will devide the no by 2
    //eg -> (hi+lo) >> 1;

    // case of alphabets
    // '_' is 1<<5
    //uppercase and lowercase leters have difference only in the 5th bit
    cout << ('a'&('_')); // uppercase A
    // 
    cout << ('A'|('_')); // prints lower case alphabets
    
    //clear LSB least signiifcant bit
    // 00011011 -> remove last 4
    // 00010000 || 11110000
    // 00001111
    // 00010000 -1
    int b = (a&(~((1<<(i+1))-1)));
    

    //lly to clear MSB most significant bit
    int b = (a&((1<<(i+1))-1));


    //chek the power of 2 like 2, 4, 8, 16
    if(a&(a-1)) cout << " nahi hoga" << endl;
    else cout << "noga" << endl;
    return 0;
}

