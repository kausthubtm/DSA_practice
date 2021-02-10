#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, arr1[10000], arr2[10000], start, stop, i, ans;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>arr1[i];
        arr2[i] = arr1[i];
    }
    sort(arr2, arr2+n);
    i=0;
    while(arr1[i]==arr2[i] && i<n) {
        i++;
    }
    start = i;
    i=n-1;
    while(arr1[i]==arr2[i] && i>0) {
        i--;
    }
    stop = i;
    ans = stop-start+1;
    if(ans>0) cout<<ans<<endl;
    else cout<<"0"<<endl;
    return 0;
}