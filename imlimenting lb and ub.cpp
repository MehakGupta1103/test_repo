#include<bits/stdc++.h>
#define int long long
using namespace std;
int lowerBound(vector<int> v, int toFind){
    int lo = 0; 
    int hi = v.size()-1;
    int mid;
    // cout << " this is to be find " << toFind << endl;
    while(hi-lo>1){
        mid = (lo+hi)/2;
        if(v[mid]<toFind){
            lo = mid+1;
        }
        else{
            hi = mid;
        }
    }

    if(v[lo] >= toFind) return lo;
    if(v[hi] >= toFind) return hi;
    return -1;
}
int upperBound(vector<int> v, int toFind){
    int lo = 0; 
    int hi = v.size()-1;
    int mid;
    while(hi-lo>1){
        mid = (lo+hi)/2;
        if(v[mid]<=toFind){
            lo = mid+1;
        }
        else{
            hi = mid;
        }
    }
    if(v[lo] > toFind) return lo;
    if(v[hi] > toFind) return hi;
    return -1;
}
// int lessBound(vector<int> v, int toFind){
//     int lo = 0, hi = v.size()-1;
//     int mid;
//     while(hi-lo>1){
//         if(v[mid]<toFind){
//             lo = mid+1;
//         }else hi = mid;
//     }
//     if(v[lo]<toFind) return lo;
//     if(v[hi]<toFind) return hi;
//     return -1;
// }

//no less then or equal to that no
int lessBound(vector<int> v, int toFind){
    int l=0,r=v.size()-1,j=-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(v[mid] <= toFind){
                j=mid;
                l=mid+1;
            }
            else r = mid - 1;
        }
        return j;
}
int32_t main(){
    int len;
    cin >> len;
    vector<int> num(len);
    for(auto &it: num) cin >> it;
    sort(num.begin(), num.end());
    int x;
    cin >> x ;
    // cout << "vector is" << endl;
    // for(auto &it: num) cout << it << " ";
    cout << endl;
    int lb = lowerBound(num, x);
    int ub = upperBound(num, x);
    int sb = lessBound(num, x);
    cout << " the lower bound index is " << lb << " the upper bound index is " << ub << endl;
    cout << " the less fboune is " << sb << endl;
    return 0;
}

