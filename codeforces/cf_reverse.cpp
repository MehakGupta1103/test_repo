#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main()
{
    int t; cin >> t;
    while (t--) {
      int n; cin >> n;
      int arr[n+1];
      int curr = 0;
      int index = -1;
      for(int i = 1; i <= n; i++){
          cin >> arr[i];
      }
      for(int i = 1; i <= n; i++){
        //   cout << arr[i] << " elements  \n";
          if(curr == 0 && arr[i] != i){
              curr = i;
            //   cout << curr << " this is current ans i " <<  i << endl;
          }
      }
    //   cout << " chala "<< curr << endl;
      if(curr){
        for(int i = 1; i <= n; i++){
            if(curr==arr[i]) index = i;
        }  
      }
    //   cout << curr << " this is curr " << index << endl;
      if(!curr){
          for(int i = 1; i < n+1; i++) cout << arr[i] << " ";
      }
      else {

          for(int i = 1; i < curr; i++) cout << arr[i] << " ";
          for(int i = index; i >= curr; i--) cout << arr[i] << " ";
          for(int i = index+1; i < n+1; i++) cout << arr[i] << " ";
      }
      cout << endl;
    }
    return 0;
}

/**
 * @brief 
 *
4
1
1
3
2 1 3
4
1 4 2 3
5
1 2 3 4 5
 * 
 */