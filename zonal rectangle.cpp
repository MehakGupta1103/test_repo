#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    //input
    int n;
    cin >> n;
    pair<int,int> arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i].first >> arr[i].second;
    //logic
    sort(arr, arr+n);
    stack< pair<int,int> > st;
    int lb[n], rb[n];
    //finding the right bound
    for(int i = 0; i < n; i++){
        while(!st.empty() && st.top().first > arr[i].second){
            pair<int,int> element = st.top();
            st.pop();
            rb[element.second] = arr[i].first;
        }
        st.push(make_pair(arr[i].second,i));
    }
    //stack is not necessasarily empty now
    //all of the elements that are still inside the stack are bounded by a point, the are bounded by edges
    while(!st.empty()){
        pair<int,int> element = st.top();
        st.pop();
        rb[element.second] = 100000;
    } 
    //finding the left bound
    for(int i = n-1; i >= 0; i--){
        while(!st.empty() && st.top().first > arr[i].second){
            pair<int,int> element = st.top();
            st.pop();
            lb[element.second] = arr[i].first;
        }
        st.push(make_pair(arr[i].second,i));
    }
    //stack is not necessasarily empty now
    //all of the elements that are still inside the stack are bounded by a point, the are bounded by edges
    while(!st.empty()){
        pair<int,int> element = st.top();
        st.pop();
        lb[element.second] = 0;
    } 
    //using th eleft bound and right bound
    int ans = 0;
    for(int i = 0; i < n; i++){
        int left = lb[i];
        int right = rb[i];
        int height = arr[i].second;
        int width = rb[i] - lb[i];
        ans = max(ans,height*width);
    }
    ans = max(ans, 500*arr[0].first);
    for(int i= 0; i < n-1; i++){
        int dist = arr[i+1].first - arr[i].first;//the sidtance between consecutive elements
        ans = max(ans,500*dist);//the top edge as the top of the plane geight 500 and the width as the point
    }
    ans = max(ans,(100000-arr[n-1].first)*500);//the distance between the right edge of the plan
    //output
    cout << ans << endl;
    return 0;
}
