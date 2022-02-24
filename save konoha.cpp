// #include<bits/stdc++.h>
// #define int long long
// using namespace std;
// int32_t main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n, z;
//         cin >> n >> z;
//         int power = z;
//         vector<int> sol(n);
//         for(int i = 0; i < n; i++){
//             cin >> sol[i];
//         }
//         int index = 0;
//         int count = 0;
//         int flag = 0;
//         while(true){
//             sort(sol.begin(),sol.end(),greater<int>());
//             if(sol[index]==0){
//                 flag = 1;
//                 break;
//             }
//             power -= sol[index];
//             count++;
//             sol[index] = sol[index]/2;
//             if(power <= 0) break;
//         }
//         if(flag) cout << "Evacuate" << endl;
//         else cout << count << endl;
//     }
//     return 0;
// }

/*** priority que ***/
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, z;
        cin >> n >> z;
        priority_queue<int> sol;
        int temp;
        for(int i = 0; i < n; i++){
            cin >> temp;
            sol.push(temp);
        }
        int count = 0;
        while(z>0 && !sol.empty()){
            z -= sol.top();
            int c = sol.top()/2;
            sol.pop();
            if(c>0) sol.push(c);
            count++;
        }
        if(z>0) cout << "Evacuate" << endl;
        else cout << count << endl;
    }
    return 0;
}