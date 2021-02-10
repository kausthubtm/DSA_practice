#include <bits/stdc++.h>
using namespace std;

int count(int n) {
    int arr[5], ans;
    
    arr[0] = n/100;
    n = n - arr[0]*100;
    arr[1] = n/20;
    n = n - arr[1]*20;
    arr[2] = n/10;
    n = n - arr[2]*10;
    arr[3] = n/5;
    n = n - arr[3]*5;
    arr[4] = n/1;
    n = n - arr[4]*1;
    ans = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    return ans;
}

int main() {
    int n;
    cin>>n;
    cout<<count(n)<<"\n";
}