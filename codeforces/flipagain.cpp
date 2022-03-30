#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int first = 0, siej, count = 0;
        int arr[1001] = {0};
        map<int,int> data;
        for(int i = 0; i < n; i++){
            
            if(s[i] == '1'){
                if(count == 0){
                    first = i+1;
                }
                count++;
                s[i] = '0';
            }
            else{
                if(arr[count]){  // 1 -- mila -- chala
                    // while(arr[count] && count<= 1000){
                        count++;
                        s[i] = '1';
                        i--;                       

                        data[first] = count;
                        count = 0; first = i; 
                    
                } 
                else if (count!=0){
                    data[first] = count;
                    arr[count] = 1;
                    count = 0; 
                } 
                         
            }
        }
        if(count!=0) data[first] = count;
        cout << data.size() << endl;
        for(auto &it : data) cout << it.first << " " << it.second << endl;
	}
	return 0;
}
