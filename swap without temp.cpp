#include<bits/stdc++.h>
using namespace std;
int main(){
    /***int a = 9;
    int b = 7;
    cout << a << " " << b << endl;
    a = a^b;
    b = a^b;
    a = b^a;
    cout << a << " " << b << endl; ***/
    
    
    /*** finding the odd count ***/
    
    int arr[] = {3,3,4,4,5,5,5,6,6};
    int temp = 0;
    for(int i = 1; i < 9; i++){
        temp ^= arr[i];
    }
    cout << temp;
    //o(1)space
    //O(N) time complexity

}