#include <bits/stdc++.h>
using namespace std;

int maxLoot(vector <int> &nums) {

    int val1, val2, maxVal;

    if(nums.size()==0) return 0;
    if(nums.size()==1) return nums[0];
    if(nums.size()==2) return max(nums[0], nums[1]);

    val1 = nums[0];
    val2 = max(nums[0], nums[1]);
    maxVal = 0;

    for(int i=2; i< nums.size(); i++) {
        maxVal = max(nums[i]+val1, val2);
        val1 = val2;
        val2 = maxVal;
    }

    return maxVal;
}

int main() {
    int n, input, ans;
    vector <int> arr;

    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>input;
        arr.push_back(input);
    }

    cout<<maxLoot(arr);

    return 0;
}
