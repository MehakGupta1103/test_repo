#include<bits/stdc++.h>

#define loop(i, start, end) for(int i = start; i < end; i++)

using namespace std;

int main(){
   int n; cin >> n;
   int arr[n];
   loop(i, 0, n) cin >> arr[i];
   int i = 0;
   while( (arr[i]-i) > 0 ){
        i++;
   }
   cout << i % n << endl;
   return 0;
}