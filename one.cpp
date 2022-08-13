#include<bits/stdc++.h>

#define loop(i, start, end) for(int i = (int)start; i < (int)end; i++) 


using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    loop( i, 0, n){
        cin >> arr[i];
    }
    int esum = 0, osum = 0;
    for(int i = 0; i < n; i+=2){
        if(!(arr[i]%2)){
            esum += arr[i];
        }
    }
    
    for(int i = 1; i < n; i+=2){
        if(arr[i]%2) osum += arr[i];
    }
    cout << esum << " " << osum << endl;

    return 0;
}