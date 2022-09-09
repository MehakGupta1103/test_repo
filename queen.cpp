#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	     int a, b;
	     cin >> a >> b;
	     a--;b--;
	     int mat[8][8];
	     for(int i = 0; i < 8; i++){
	         for(int j = 0; j < 8; j++){
	             mat[i][j] = 0;
	         }
	     }
	     
	     
	     mat[a][b] = 1;
	     
	     if(a == 0){
	         if(b== 0) mat[1][2] = 2;
	         else if(b == 7) mat[1][5] = 2;
	         else{
	             mat[2][b-1] = 2;
	             mat[2][b+1] = 2;
	         }
	     }
	     else if(a == 7){
	         if(b== 0) mat[6][2] = 2;
	         else if(b == 7) mat[6][5] = 2;
	         else{
	             mat[5][b+1] = 2;
	             mat[5][b-1] = 2;
	         }
	     }
	     else if(b == 0){
	         mat[a-1][2] = 2;
	         mat[a+1][2] = 2;
	     }
	     else if(b==7){
	         mat[a-1][5] = 2;
	         mat[a+1][5] = 2;
	     }
	     else if(a-2 >= 0 && a+2 <= 7){
	         mat[a+2][b-1] = 2;
	         mat[a-2][b+1] = 2;
	     }
	     else if(b-2 >= 0 && b+2 <= 7){
	         mat[a+1][b-2] = 2;
	         mat[a-1][b+2] = 2;
	     }
	     else{
	         if(a==6 && b==6){
	         	// cout << "1" << endl;
	             mat[a+1][b-2] = 2;
	           mat[a-3][b+1] = 2;
	         }
	         else if(a==1 && b==1){	   
	         // cout << 2 << endl;          
	         	mat[a-1][b+2] = 2;
	           mat[a+3][b-1] = 2;
	         }
	         else if(a==6 && b==1){
	         	// cout << 3 << endl;
	             mat[4][0] = 2;
	           mat[7][4] = 2;
	         }
	         else{
	         	// cout << 4 << endl;
	             mat[a-1][b-2] = 2;
	           mat[a+3][b+1] = 2;
	         }
	     }
	     for(int i = 0; i < 8; i++){
	     	for(int j = 0; j < 8; j++){
	     		cout << mat[i][j] << " ";
	     	}
	     	cout << endl;
	     }
	    cout << endl;
	    
	}
	return 0;
}
