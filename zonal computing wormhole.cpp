// ~mera code~


// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// int searchmin(int toFind,vector<int> num){
//     int lo = 0, hi = (num.size())-1;
//         int mid = -1;
//         while(hi-lo>1){
//             mid = (hi+lo)/2;
//             if(num[mid]<toFind) lo = mid+1;
//             else hi = mid;
//         }
//         if(mid!=-1) return num[lo];
//         return -1;
// }
// int searchmax(int toFind,vector<int> num){
//     int lo = 0, hi = (num.size())-1;
//         int mid = -1;
//         while(hi-lo>1){
//             mid = (hi+lo)/2;
//             if(num[mid]<toFind) lo = mid+1;
//             else hi = mid;
//         }
//         if(mid!=-1) return num[lo];
//         return -1;
// }
// int32_t main(){
//     int NOContest, VHole, WHole;
//     cin >> NOContest >> VHole >> WHole;
//     int start, end;
//     map<int,int> contest;
//     for(int i = 0; i < NOContest; i++){
//         cin >> start >> end;
//         contest[start] = end;
//     }
//     vector<int> housetoexh;
//     vector<int> exhtohouse;
//     int htoeh;
//     for(int i = 0; i < VHole; i++){
//         cin >> htoeh;
//         housetoexh.push_back(htoeh);
//     }
//     int exhtoh;
//     for(int i = 0; i < WHole; i++){
//         cin >> exhtoh;
//         exhtohouse.push_back(exhtoh);
//     }
//     sort(housetoexh.begin(), housetoexh.end());
//     sort(exhtohouse.begin(), exhtohouse.end());

//     int min = 1e9;
//     int entryt, exitt = 1e7;
//     int diff ;
//     for(auto &value: contest){
//         int entryterm = value.first;
//         int exitterm = value.second;
//         entryt = searchmin(entryterm,housetoexh); //no. <= entryterm
//         exitt = searchmax(exitterm,exhtohouse);  // no. >= exit
//         if(entryt!=-1 && exitt!=-1) diff = exitt - entryt;
//         if(min > diff) min = diff;
//     }
//     cout << min+1 << endl;
//     return 0;
// }








//purana code

/***#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int NOContest, VHole, WHole;
    cin >> NOContest >> VHole >> WHole;
    int start, end;
    map<int,int> contest;
    for(int i = 0; i < NOContest; i++){
        cin >> start >> end;
        contest[start] = end;
    }
    set<int> housetoexh;
    set<int> exhtohouse;
    int htoeh;
    for(int i = 0; i < VHole; i++){
        cin >> htoeh;
        housetoexh.insert(htoeh);
    }
    int exhtoh;
    for(int i = 0; i < WHole; i++){
        cin >> exhtoh;
        exhtohouse.insert(exhtoh);
    }
    // //check
    // cout << " this is the values of contests " << endl;
    // for(auto &it: contest){
    //     cout << it.first << " " << it.second << endl;
    // }
    // cout << " ehew are th values of entry woerm hole " << endl;
    // for(auto &it: housetoexh){
    //     cout << it << " ";
    // }
    // cout << " ehew are th values of exit woerm hole " << endl;
    // for(auto &it: exhtohouse){
    //     cout << it << " ";
    // }
    int min = 10e7;
    int entryt, exitt = 1e7;
    int diff;
    for(auto &value: contest){
        int entryterm = value.first;
        // cout << " the contest value are " << value.first << " " << value.second << endl;
        auto t = lower_bound(housetoexh.begin(), housetoexh.end(), entryterm );
        t--;
        entryt = *t;
        if(lower_bound(exhtohouse.begin(), exhtohouse.end(), value.second ) != exhtohouse.end()){
            exitt = *lower_bound(exhtohouse.begin(), exhtohouse.end(), value.second );
        }
        // cout << " the entrytime " << entryt << endl;
        // cout << " the exit time " << exitt << endl;
        diff = exitt - entryt;
        if(min > diff) min = diff;
    }
    cout << min+1 << endl;
    return 0;
}***/

// ~dupli~
//header
#include <bits/stdc++.h>
using namespace std;

const unsigned int M = 1000100007;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpair;
typedef queue<int> qu;

#define ipr pair<int,int>
#define llpr pair<ll,ll>
#define mpr(a,b) make_pair(a,b)
#define ar(length) array<int, length>
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define llrep(i, a, b) for (long long i = a; i <= b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define llrrep(i, a, b) for (long long i = a; i >= b; i--)

// //sol
// void solve(vpair times, vi v, vi w){
	
// 	sort(v.begin(),v.end());
// 	sort(w.begin(),w.end());

// 	int ans = 1e9;
// 	rep(i,0,times.size()-1){
// 		int l=0,r=v.size()-1,j=-1;
// 		while(l<=r){
// 			int mid = (l+r)/2;
// 			if(v[mid] <= times[i].first){
// 				j=mid;
// 				l=mid+1;
// 			}
// 			else r = mid - 1;
// 		}

// 		l=0,r=w.size()-1;
// 		int k=-1;
// 		while(l<=r && j!=-1){
// 			int mid = (l+r)/2;
// 			if(w[mid] >= times[i].second){
// 				k=mid;
// 				r=mid-1;
// 			}
// 			else l=mid+1;
// 		}

// 		if(j!=-1 && k!=-1){
// 			ans = min(ans,w[k]-v[j]+1);
// 		}
// 	}

// 	cout<<ans<<"\n";
// }

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
int main()
{
	ios::sync_with_stdio(false);
	vpair times;
	int n,x,y;
	int a,b;
	int q;
	cin>>n>>x>>y;
	while(n--){
		cin>>a>>b;
		times.push_back(mpr(a,b));
	}
	vi v;
	while(x--){
		cin>>q;
		v.push_back(q);
	}
	vi w;
	while(y--){
		cin>>q;
		w.push_back(q);
	}
	// solve(times,v,w);
    int ans = 1e9;
    for(int i = 0; i < times.size()-1; i++){
        int lb = lowerBound(v,times[i].first);
        int ub = upperBound(w,times[i].second);
        if(lb!=-1 && ub!=-1){
            ans = min(ans, w[ub]-v[lb]+1);
        }
    }
	return 0;
}