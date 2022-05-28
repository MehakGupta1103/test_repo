#include <bits/stdc++.h>
using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin >> t;
// 	while(t--){
	    
// 	        int n; cin >> n;
// 	        string temp1 = to_string(n);
// 	        int sum1 = 0;
// 	        for(int i = 0; i < temp1.length(); i++){
// 	            sum1 += temp1[i];
// 	        }
// 	        string temp2 = to_string(n+1);
// 	        int sum2 = 0;
// 	        for(int i = 0; i < temp2.length(); i++){
// 	            sum2 += temp2[i];
// 	        }
// 	        string temp3 = to_string(n+2);
// 	        int sum3 = 0;
// 	        for(int i = 0; i < temp3.length(); i++){
// 	            sum3 += temp3[i];
// 	        }
// 	        if(sum1%2==0){
// 	            if(sum2%2 != 0) cout << n+1 << endl;
// 	            else cout << n+2 << endl;
// 	        }
// 	        else{
// 	            if(sum2%2 == 0) cout << n+1 << endl;
// 	            else cout << n+2 << endl;
// 	        }
// 	}
// 	return 0;
// }

/**
 * @brief 
 *  reall;y ar new discovery wolla()()()()()(((((()))))()()()()()())
 * @return int 
 */
int main()
{ 
  char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;
  ptr += 4;
  cout << ptr;  //--> prints the whole string;
  return 0;
}