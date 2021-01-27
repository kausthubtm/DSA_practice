#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector <int> &nums){
    int small, ans, profit;
    small = nums[0];
    ans = profit = 0;
    for(int i=1; i<nums.size(); i++) {
        profit = nums[i] - small;
        if(nums[i] < small) small = nums[i];
        if(profit > ans) ans = profit; 
    }
    return ans;
}



int main() {
    int n,input;
    cin>>n;
    vector <int> vec;
    for(int i=0; i<n; i++) {
        cin>>input;
        vec.push_back(input);
    }
    cout<<maxProfit(vec);
}