/***You are given a permutation p1,p2,…,pn of length n. You have to choose two integers l,r (1≤l≤r≤n) and reverse 
 * the subsegment [l,r] of the permutation. The permutation will become p1,p2,…,pl−1,pr,pr−1,…,pl,pr+1,pr+2,…,pn.

Find the lexicographically smallest permutation that can be obtained by performing exactly one reverse operation 
on the initial permutation.

Note that for two distinct permutations of equal length a and b, a is lexicographically smaller than b if at 
the first position they differ, a has the smaller element.

A permutation is an array consisting of n distinct integers from 1 to n in arbitrary order. 
For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation
 (2 appears twice in the array) and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).

Input
Each test contains multiple test cases. The first line contains a single integer t (1≤t≤500) — 
the number of test cases. Descriptklklklion of the test cases follows.

The first line of each test case contains a single integer n (1≤n≤500) — the length of the permutation.

The second line of each test case contains n integers p1,p2,…,pn (1≤pi≤n) — the elements of the permutation.

Output
For each test case print the lexicographically smallest permutation you can obtain.

Example
inputCopy
4
1
1
3
2 1 3
4
1 4 2 3
5
1 2 3 4 5
outputCopy
1 
1 2 3 
1 2 4 3 
1 2 3 4 5 
Note
In the first test case, the permutation has length 1, so the only possible segment is [1,1]. 
The resulting permutation is [1].

In the second test case, we can obtain the identity permutation by reversing the segment [1,2]. 
The resulting permutation is [1,2,3].

In the third test case, the best possible segment is [2,3]. The resulting permutation is [1,2,4,3].

In the fourth test case, there is no lexicographically smaller permutation, so we can leave 
it unchanged by choosing the segment [1,1]. The resulting permutation is [1,2,3,4,5].

***/
#include<bits/stdc++.h>
using namespace std;
void ans(){

        int len;
        cin >> len;
        vector<int> pr(len);
        for(auto &it: pr){
            cin >> it;
        }
        int flag = 0;
        for(int i = 0; i < len; i++){
            if(pr[i] != i+1){
                for( int j = i+1; j < len; j++){
                    if(pr[j] == i+1){
                        int temp = pr[j];
                        pr[j] = pr[i];
                        pr[i] = temp;
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 1) break;
        }
        for(auto &value: pr){
            cout << value << " ";
        }
        cout << endl;
}
int main(){
    // vector< pair<int,int> > v = {{4,6} , {5,7}};
    // for(auto &value : v){
    //     cout << value.first << value.second << " ";
    // }
    int n;
    cin >> n;
    // map<string,int> uniq;
    // string t;
    // for(int i = 0; i < n; i++){
    //     cin >> t;
    //     uniq[t]++;
    //     // auto it = map.find(t);
    //     // if(it != 0){
    //     //     (*it).second++;
    //     // }
    //     // else{
    //     //     map.insert(t);
    //     // }
        
    // }
    // for(auto value : uniq){
    //         cout << value.first << " " << value.second << endl;
    //     }

    while(n--){
        // int len;
        // cin >> len;
        // int arr[len];
        // for(int i = 0; i < len; i++){
        //     cin >> arr[i];
        // }
        ans();

    }
    return 0;
}
