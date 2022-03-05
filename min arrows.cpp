#include<bits/stdc++.h>
using namespace std;

struct coordinates{
    int start, end;
};

bool comparator(coordinates p1, coordinates p2){
    return (p1.end<p2.end);
}

bool comparator4vv(vector<int> a, vector<int> b){
    return (a[1]<b[1]);
}
int main(){
    vector<coordinates> balloons;
    vector<vector<int>> points = {{10,16},{11,12},{2,8},{0,6}};
    balloons = {{10,16},{11,12},{2,8},{0,6}};

    int n; cin >> n;
    sort(balloons.begin(),balloons.end(),comparator);
    sort(points.begin(), points.end(), comparator4vv);
    /**for(auto &it: balloons){
        cout << it.start << " "  << it.end<< endl;
    }**/
    // int count = 1;
    // int com = balloons[0].end;
    // for(int i = 0; i < balloons.size(); i++){
    //     cout << balloons[i].start << " " << com << endl;
    //     if(balloons[i].start<=com);
    //     else{
    //         com = balloons[i].end;
    //         count++;
    //     }
    // }
    // cout << count << endl;
    cout << points.size() << " size" << endl;
    int count = 1;
    int com = points[0][1];
    for(int i = 0; i < points.size(); i++){
        cout << points[i][0] << " " << com << endl;
        if(points[i][0]<=com);
        else{
            com = points[i][1];
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
