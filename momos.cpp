#include<bits/stdc++.h>

#define loop(i, start, end) for(int i = start; i < end; i++)

using namespace std;

int main(){
    int n; cin >> n;
    int prices[n];
    loop(i, 0, n) cin >> prices[i];
    int days; cin >> days;
    int money[days];
    loop(i, 0, days) cin >> money[i];
    vector<int> pre_sum;
    int sum = prices[0];
    loop(i, 1, n){
        pre_sum.push_back(sum);
        sum += prices[i];
    }
    int momos_bought = 0, money_left = 0;
    loop(i, 0, days){
        auto temp = upper_bound(pre_sum.begin(), pre_sum.end(), money[i]);
        temp--;
        cout << *temp << " momos bought on day " << i << endl;
        momos_bought += *temp;
        cout << " money saved " << (money[i] - pre_sum[*temp]) << endl;
        money_left += (money[i] - pre_sum[*temp]);
    }
    cout << momos_bought << " " << money_left << endl;
}