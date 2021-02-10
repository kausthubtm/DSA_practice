#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, arr1[10000];
    bool increasing, ans=true;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>arr1[i];
    }
    if(arr1[0]<arr1[1]) {
        increasing = true;
    }
    if(increasing) {
        for(int i=0; i<n-1; i++) {
            if(arr1[i]>arr1[i+1]) {
                ans = false;
                break;
            } 
        }
    }
    else {
        for(int i=0; i<n-1; i++) {
            if(arr1[i]<arr1[i+1]) {
                ans = false;
                break;
            }
        }
    }
    cout<<ans<<"\n";
}