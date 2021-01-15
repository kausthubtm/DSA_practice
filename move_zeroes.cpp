#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector <int> &nums) {
    int n = nums.size();

    for (auto it = nums.begin(); it != nums.end(); ++it) {
        if(*it ==0) {
            nums.erase(it);
            nums.push_back(0);
        }
    }
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout<<*it<<" ";
    }
}

int main() {
    int n, input;
    vector <int> arr;

    cin>>n;
    for(int i=0; i<n; i++) {
        cin>> input;
        arr.push_back(input);
    }

    moveZeroes(arr);

}