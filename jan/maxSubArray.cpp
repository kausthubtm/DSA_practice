#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector <int> &nums) {
    int max1, max2;
    max1 = max2 = 0;
    for(int i=0; i< nums.size(); i++) {
        max1 = max1 + nums[i];
        if(max1 > max2) {
            max2 = max1;
        }
        if(max1 < 0) {
            max1 = 0;
        }
    }
    return max2;
}

int main() {
     int n, input;
     vector <int> vec;
     cin>>n;
     for(int i=0; i<n; i++) {
         cin>>input;
        vec.push_back(input);
     }
     cout<<maxSubArray(vec);
     return 0;
}
