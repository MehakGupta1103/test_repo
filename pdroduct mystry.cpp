#include <iostream>
using namespace std;
#define int long long 
const int n = 1e5;
// int ans(int b, int c){
//     for(int i = 1; i <= c; i++){
//         if((i*b)%c == 0)
//         return i; // the min value of a
//     }
// }

int carr[n] = {0};
int barr[n] = {0};
int aarr[n] = {0};
	        
int32_t main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	        
	        int b, c;
	        cin >> b >> c;
            for(int i = 2; i <= c; i++){
                while(c%i==0){
                    carr[i]++;
                    c = c/i;
                }
            }
            for(int i = 2; i <= b; i++){
                while(b%i==0){
                    barr[i]++;
                    b = b/i;
                }
            }
            int ans = 1;
            for(int i = 2; i <= n; i++){
                //cout << "this is carr[i] " << carr[i] << "this is barr[i]" << barr[i] << endl;
                if(carr[i]>0 || barr[i]>0){
                    aarr[i] = carr[i]-barr[i];
                    if(aarr[i] > 0){
                        for(int j = 0; j < aarr[i]; j++){
                            ans = ans*i;
                        }
                    }
                }
            }
            cout << ans << endl;
	}
	return 0;
}



#include <iostream>
using namespace std;
#define int long long 

	        
int32_t main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	    
	        
	        int b, c;
	        cin >> b >> c;
	        int top = c;
	        int carr[c] = {0};
            int barr[b] = {0};
            int aarr[c] = {0};
            for(int i = 2; i <= c; i++){
                while(c%i==0){
                    carr[i]++;
                    c = c/i;
                }
            }
            for(int i = 2; i <= b; i++){
                while(b%i==0){
                    barr[i]++;
                    b = b/i;
                }
            }
            int ans = 1;
            
            for(int i = 2; i <= top; i++){
                //cout << "this is carr[i] " << carr[i] << "this is barr[i]" << barr[i] << endl;
                if(carr[i]>0 || barr[i]>0){
                    aarr[i] = carr[i]-barr[i];
                    if(aarr[i] > 0){
                        for(int j = 0; j < aarr[i]; j++){
                            ans = ans*i;
                        }
                    }
                }
            }
            cout << ans << endl;
	}
	return 0;
}
