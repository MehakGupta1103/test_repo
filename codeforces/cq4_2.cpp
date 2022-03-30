// CPP program to find all subsets by backtracking.
#include <bits/stdc++.h>
#define int long long
using namespace std;
 
// In the array A at every step we have two
// choices for each element either  we can
// ignore the element or we can include the
// element in our subset
void subsetsUtil(vector<int>& A, vector<vector<int> >& res,
                 vector<int>& subset, int index)
{
    res.push_back(subset);
    for (int i = index; i < A.size(); i++) {
 
        // include the A[i] in subset.
        subset.push_back(A[i]);
 
        // move onto the next element.
        subsetsUtil(A, res, subset, i + 1);
 
        // exclude the A[i] from subset and triggers
        // backtracking.
        subset.pop_back();
    }
 
    return;
}
 
// below function returns the subsets of vector A.
vector<vector<int> > subsets(vector<int>& A)
{
    vector<int> subset;
    vector<vector<int> > res;
 
    // keeps track of current element in vector A;
    int index = 0;
    subsetsUtil(A, res, subset, index);
 
    return res;
}
 
// Driver Code.
int32_t main()
{
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        // res will store all subsets.
        // O(2 ^ (number of elements inside array))
        // because at every step we have two choices
        // either include or ignore.
        vector<vector<int> > res = subsets(arr);
        int sarr[40] = {0};
        // Print result
        for (int i = 0; i < res.size(); i++) {
            int sor = 0;
            int sije = res[i].size() ;
            // cout << sije << " this is th esi sze " << endl;
            for (int j = 0; j < res[i].size(); j++){
                // cout << res[i][j] << " ";
                sor ^= res[i][j];
            }
            
            if(sor==k){
                // cout << " the sor " << sor ;
                sarr[sije]++;
            }
            // cout << endl;
        }
        for(int i = 1 ; i < n+1; i++){
            cout << sarr[i] << " " ;
        }
        cout << endl;
    }
    return 0;
}