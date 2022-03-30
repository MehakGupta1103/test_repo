#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
         
         int lo = 0;
	        int n; cin >> n;
	        string s; cin >> s;
	        int count = 0, curr = 1;
	        unordered_set<int> used;
	        map<int,int> data;
	        int flag = 1;
	        int arr[10001] = {0,};
	        for(int i = 0; i < n; i++){
                if(s[i] < s[i+1]) lo++;
	            if(s[i]=='1'){
                    // if(count == 0) curr = i+1;
	                if(flag) count++;
	                else{
	                    if(arr[count]){
                            cout << count << " not found " << endl;
    	                    flag = 0;
                            count ++;
    	                    continue;
	                     }
	                     else{
                             cout << "there " << count << endl;
	                         data[curr] = count+1 ;
	                     }
	                }
	            }
	            else{
	                cout << count << "  before finding " << endl;
	                if(arr[count]){
                        cout << count << "  found  too " << endl;
	                    flag = 0;
	                    count ++ ;
	                    continue;
	                }
	                else{
                        cout << "here " << count << endl;
	                    data[curr] = count;
                        arr[count] = 1;
    	                count = 0;
    	                curr = i+2;
	                }
	                
	            }
	        }
            if(lo==1){
                cout << 0 << endl;
            }
            else{
                cout << "case " << t << endl;
                cout << data.size() << endl;
                for(auto &it: data){
                    cout << it.first << " " << it.second << endl;
                }  
            }
            
	}
	return 0;
}
