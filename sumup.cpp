#include<bits/stdc++.h>

#define loop(i, start, end) for(int i = start; i < end; i++)

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int sum = 0;
        while(n>0){
            sum += n%10;
            n /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}